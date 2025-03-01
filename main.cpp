#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDir>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Explicitly set the QML module import path for Qt Creator
    engine.addImportPath(QCoreApplication::applicationDirPath() + "/../Resources");

    // Load the QML module named "transitions", starting from Main.qml
    engine.loadFromModule("transitions", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
