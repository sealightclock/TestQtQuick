#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDir>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Load the QML module named "com.example.jonathan", starting from Main.qml
    engine.loadFromModule("com.example.jonathan", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
