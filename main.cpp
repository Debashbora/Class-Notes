#ifdef QT_WIDGETS_LIB
#include <QApplication>
#else
#include <QGuiApplication>
#endif
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlFileSelector>
#include <QFontDatabase>
#include <QDebug>
#include <QQuickStyle>
#include <QSettings>

#include "documenthandler.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication::setApplicationName("Class-Notes");
    QGuiApplication::setOrganizationName("Blank");

   #ifdef QT_WIDGETS_LIB
    QApplication app(argc, argv);
   #else
    QGuiApplication app(argc, argv);
   #endif
    QSettings settings;
    if (qEnvironmentVariableIsEmpty("QT_QUICK_CONTROLS_STYLE"))
        QQuickStyle::setStyle(settings.value("style").toString());

    const QString styleInSettings = settings.value("style").toString();
    if (styleInSettings.isEmpty())
        settings.setValue(QLatin1String("style"), QQuickStyle::name());



    qmlRegisterType<DocumentHandler>("Class.Note", 1, 0, "DocumentHandler");

    QQmlApplicationEngine engine;

    QStringList builtInStyles = { QLatin1String("Basic"), QLatin1String("Fusion"),
                                  QLatin1String("Imagine"), QLatin1String("Material"), QLatin1String("Universal") };
    engine.setInitialProperties({{ "builtInStyles", builtInStyles }});

    const QUrl url(QStringLiteral("qrc:/main.qml"));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
