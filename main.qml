import QtQuick
import QtCore
import QtQuick.Window
import QtQuick.Controls 2.12
import Qt.labs.settings
import QtQuick.Layouts 1.14
import QtQuick.Dialogs
import Qt.labs.platform 1.0 as Platform
import Class.Note

ApplicationWindow {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Class-Note")
    Component.onCompleted: {
        x = Screen.width / 2 - width / 2
        y = Screen.height / 2 - height / 2
    }
    required property var builtInStyles
    Settings {
        id: settings
        property string style
    }


    Action {
        id: openAction
        shortcut: StandardKey.Open
        onTriggered: openDialog.open()
    }

    Action {
        id: saveAsAction
        shortcut: StandardKey.SaveAs
        onTriggered: saveDialog.open()
    }

    Action {
        id: quitAction
        shortcut: StandardKey.Quit
        onTriggered: close()
    }

    Action {
        id: copyAction
        shortcut: StandardKey.Copy
        onTriggered: textArea.copy()
    }

    Action {
        id: cutAction
        shortcut: StandardKey.Cut
        onTriggered: textArea.cut()
    }

    Action {
        id: pasteAction
        shortcut: StandardKey.Paste
        onTriggered: textArea.paste()
    }

    Action {
        id: boldAction
        shortcut: StandardKey.Bold
        onTriggered: document.bold = !document.bold
    }

    Action {
        id: italicAction
        shortcut: StandardKey.Italic
        onTriggered: document.italic = !document.italic
    }

    Action {
        id: underlineAction
        shortcut: StandardKey.Underline
        onTriggered: document.underline = !document.underline
    }

    menuBar: MenuBar{

        width: parent.width
        Menu {
            id: fileOption
            title: qsTr("File")

            MenuItem {
                text: qsTr("Open")
                onTriggered: openDialog.open()
            }
            MenuItem {
                text: qsTr("Save As...")
                onTriggered: saveDialog.open()
            }
            MenuItem {
                text: qsTr("Quit")
                onTriggered: close()
            }
        }
        Menu {
            id:editOption
            title: qsTr("Edit")

            MenuItem {
                text: qsTr("Copy")
                enabled: textArea.selectedText
                onTriggered: textArea.copy()
            }
            MenuItem {
                text: qsTr("Cut")
                enabled: textArea.selectedText
                onTriggered: textArea.cut()
            }
            MenuItem {
                text: qsTr("Paste")
                enabled: textArea.canPaste
                onTriggered: textArea.paste()
            }
        }
        Menu {
            id:formatOption
            title: qsTr("Format")

            MenuItem {
                text: qsTr("Bold")
                checkable: true
                checked: document.bold
                onTriggered: document.bold = !document.bold
            }
            MenuItem {
                text: qsTr("Italic")
                checkable: true
                checked: document.italic
                onTriggered: document.italic = !document.italic
            }
            MenuItem {
                text: qsTr("Underline")
                checkable: true
                checked: document.underline
                onTriggered: document.underline = !document.underline
            }
            MenuItem {
                text: qsTr("Strikeout")
                checkable: true
                checked: document.strikeout
                onTriggered: document.strikeout = !document.strikeout
            }
        }
        Menu {
            id: optionsMenu
            title:qsTr("Options")

            Action {
                text: "Settings"
                onTriggered: settingsDialog.open()
            }
            Action {
                text: "Help"
                // onTriggered: help()
            }
            Action {
                text: "About"
                //onTriggered: aboutDialog.open()
            }
        }
    }


    header: ToolBar{
        leftPadding: 1
        Flow {
            id: flow
            width: parent.width

            Row {
                id: fileRow
                ToolButton {
                    id: openButton
                    icon.source: "/assests/icons8-folder-16.png" // icon-folder-open-empty
                    action: openAction
                    focusPolicy: Qt.TabFocus
                }
                ToolSeparator {}
            }

            Row {
                id: editRow
                ToolButton {
                    id: copyButton
                    icon.source: "/assests/icons8-copy-48.png" // icon-docs
                    focusPolicy: Qt.TabFocus
                    enabled: textArea.selectedText
                    action: copyAction
                }
                ToolButton {
                    id: cutButton
                    icon.source: "/assests/icons8-cut-48.png" // icon-scissors
                    focusPolicy: Qt.TabFocus
                    enabled: textArea.selectedText
                    action: cutAction
                }
                ToolButton {
                    id: pasteButton
                    icon.source: "/assests/icons8-paste-48.png" // icon-paste
                    focusPolicy: Qt.TabFocus
                    enabled: textArea.canPaste
                    action: pasteAction
                }
                ToolSeparator {}

            }

            Row {
                id: formatRow
                ToolButton {
                    id: boldButton
                    icon.source: "/assests/icons8-bold-16.png" // icon-bold
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.bold
                    action: boldAction
                }
                ToolButton {
                    id: italicButton
                    icon.source: "/assests/icons8-italic-16.png" // icon-italic
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.italic
                    action: italicAction
                }
                ToolButton {
                    id: underlineButton
                    icon.source: "/assests/icons8-underline-16.png" // icon-underline
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.underline
                    action: underlineAction
                }
                ToolButton {
                    id: strikeoutButton
                    icon.source:  "/assests/icons8-strikethrough-16.png"
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.strikeout
                    onClicked: document.strikeout = !document.strikeout
                }
                ToolButton {
                    id: fontFamilyToolButton
                    icon.source: "/assests/icons8-fonts-app-40.png" // icon-font
                    font.bold: document.bold
                    font.italic: document.italic
                    font.underline: document.underline
                    font.strikeout: document.strikeout
                    focusPolicy: Qt.TabFocus
                    onClicked: fontDialog.open()
                }
                ToolButton {
                    id: textColorButton
                    icon.source: "/assests/icons8-text-color-16.png" // icon-brush
                    focusPolicy: Qt.TabFocus
                    onClicked: colorDialog.open()


                }
                ToolSeparator {}
            }

            Row {
                id: alignRow
                ToolButton {
                    id: alignLeftButton
                    icon.source: "/assests/icons8-align-left-50.png" // icon-align-left
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.alignment == Qt.AlignLeft
                    onClicked: document.alignment = Qt.AlignLeft
                }
                ToolButton {
                    id: alignCenterButton
                    icon.source: "/assests/icons8-align-center-50.png" // icon-align-center
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.alignment == Qt.AlignHCenter
                    onClicked: document.alignment = Qt.AlignHCenter
                }
                ToolButton {
                    id: alignRightButton
                    icon.source: "/assests/icons8-align-right-50.png" // icon-align-right
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.alignment == Qt.AlignRight
                    onClicked: document.alignment = Qt.AlignRight
                }
                ToolButton {
                    id: alignJustifyButton
                    icon.source: "/assests/icons8-align-justify-50.png" // icon-align-justify
                    focusPolicy: Qt.TabFocus
                    checkable: true
                    checked: document.alignment == Qt.AlignJustify
                    onClicked: document.alignment = Qt.AlignJustify
                }
            }
        }

    }
    Dialog {
        id: settingsDialog
        x: Math.round((window.width - width) / 2)
        y: Math.round(window.height / 6)
        width: Math.round(Math.min(window.width, window.height) / 3 * 2)
        modal: true
        focus: true
        title: "Settings"

        standardButtons: Dialog.Ok | Dialog.Cancel
        onAccepted: {
            settings.style = styleBox.displayText
            settingsDialog.close()
        }
        onRejected: {
            styleBox.currentIndex = styleBox.styleIndex
            settingsDialog.close()
        }

        contentItem: ColumnLayout {
            id: settingsColumn
            spacing: 20

            RowLayout {
                spacing: 10

                Label {
                    text: "Style:"
                }

                ComboBox {
                    id: styleBox
                    property int styleIndex: -1
                    model: window.builtInStyles
                    Component.onCompleted: {
                        styleIndex = find(settings.style, Qt.MatchFixedString)
                        if (styleIndex !== -1)
                            currentIndex = styleIndex
                    }
                    Layout.fillWidth: true
                }
            }

            Label {
                text: "Restart required"
                color: "#e41e25"
                opacity: styleBox.currentIndex !== styleBox.styleIndex ? 1.0 : 0.0
                horizontalAlignment: Label.AlignHCenter
                verticalAlignment: Label.AlignVCenter
                Layout.fillWidth: true
                Layout.fillHeight: true
            }
        }
    }
    RowLayout{
        id:layoutId
        anchors.fill: parent
        spacing:0.5
        Rectangle{

            id:explorerId
            border{
                color: "grey"
                width: 2
            }


            Layout.fillWidth: true
            Layout.minimumWidth: 30
            Layout.preferredWidth: 100
            Layout.maximumWidth: 300
            Layout.fillHeight: true


        }
        Rectangle{
            id: inputAreaId

            border{
                color: "grey"
                width: 2
            }
            Layout.fillWidth: true
            Layout.minimumWidth:100
            Layout.preferredWidth:300
            Layout.fillHeight:true

            Flickable {
                id: flickable
                anchors.fill: inputAreaId
                TextArea {
                    id: textArea
                    width: inputAreaId.width
                    textFormat: TextArea.RichText
                    wrapMode:TextArea.Wrap
                    focus: true
                    selectByMouse: true
                    persistentSelection: true


                    MouseArea {
                        acceptedButtons: Qt.RightButton
                        anchors.fill: parent
                        onClicked: contextMenu.open()
                    }

                    onLinkActivated: function (link) {
                        Qt.openUrlExternally(link)
                    }
                }

                ScrollBar.vertical: ScrollBar {}
            }
        }
    }
    DocumentHandler {
        id: document
        document: textArea.textDocument
        cursorPosition: textArea.cursorPosition
        selectionStart: textArea.selectionStart
        selectionEnd: textArea.selectionEnd
        textColor: colorDialog.color
        font:fontDialog.selectedFont


        property alias family: document.font.family
        property alias bold: document.font.bold
        property alias italic: document.font.italic
        property alias underline: document.font.underline
        property alias strikeout: document.font.strikeout
        property alias size: document.font.pointSize

        Component.onCompleted: {
            if (Qt.application.arguments.length === 2)
                document.load("file:" + Qt.application.arguments[1]);


        }
        onLoaded: function (text, format) {
            textArea.textFormat = format
            textArea.text = text
        }
        onError: function (message) {
            errorDialog.text = message
            errorDialog.visible = true
        }
    }

    FileDialog {
        id: openDialog
        fileMode: FileDialog.OpenFile
        selectedNameFilter.index: 1
        nameFilters: ["All files (*)"]
        currentFolder: StandardPaths.writableLocation(StandardPaths.DocumentsLocation)
        onAccepted: document.load(selectedFile)
    }

    FileDialog {
        id: saveDialog
        fileMode: FileDialog.SaveFile
        defaultSuffix: document.fileType
        nameFilters: openDialog.nameFilters
        selectedNameFilter.index: document.fileType === "txt" ? 0 : 1
        currentFile: StandardPaths.writableLocation(StandardPaths.DocumentsLocation)
        onAccepted: document.saveAs(selectedFile)

    }


    FontDialog {
        id: fontDialog
        onAccepted: document.font = fontDialog.selectedFont
        onVisibleChanged: if (visible) currentFont = document.font

    }

    Platform.ColorDialog {
        id: colorDialog
        currentColor: "Dark grey"
    }

    Platform.MessageDialog {
        id: errorDialog
    }

    Platform.MessageDialog {
        id : quitDialog
        title: qsTr("Quit?")
        text: qsTr("The file has been modified. Quit anyway?")
        buttons: (Platform.MessageDialog.Yes | Platform.MessageDialog.No)
        onYesClicked: Qt.quit()
    }
    Platform.Menu {
        id: contextMenu

        Platform.MenuItem {
            text: qsTr("Copy")
            enabled: textArea.selectedText
            onTriggered: textArea.copy()
        }
        Platform.MenuItem {
            text: qsTr("Cut")
            enabled: textArea.selectedText
            onTriggered: textArea.cut()
        }
        Platform.MenuItem {
            text: qsTr("Paste")
            enabled: textArea.canPaste
            onTriggered: textArea.paste()
        }

        Platform.MenuSeparator {}

        Platform.MenuItem {
            text: qsTr("Font...")
            onTriggered: fontDialog.open()
        }

        Platform.MenuItem {
            text: qsTr("Color...")
            onTriggered: colorDialog.open()
        }
    }


    onClosing: function (close) {
        if (document.modified) {
            quitDialog.open()
            close.accepted = false
        }
    }


}
