﻿#include "actionlabelplugin.h"
#include "actionlabel.h"

#include <QtCore/QtPlugin>


using namespace QSint;

ActionLabelPlugin::ActionLabelPlugin(QObject* parent)
    : QObject(parent)
{
    m_initialized = false;
}

void ActionLabelPlugin::initialize(QDesignerFormEditorInterface*)
{
    if (m_initialized)
        return;

    m_initialized = true;
}

bool ActionLabelPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *ActionLabelPlugin::createWidget(QWidget* parent)
{
    return new QSint::ActionLabel(parent);
}

QString ActionLabelPlugin::name() const
{
    return QLatin1String("QSint::ActionLabel");
}

QString ActionLabelPlugin::group() const
{
    return QLatin1String("Tianchi Widgets");
}

QIcon ActionLabelPlugin::icon() const
{
    return QIcon(":/images/tcactionlabel.png");
}

QString ActionLabelPlugin::toolTip() const
{
    return QLatin1String("");
}

QString ActionLabelPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ActionLabelPlugin::isContainer() const
{
    return false;
}

QString ActionLabelPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QSint::ActionLabel\" name=\"ActionLabel\">\n"
                         "<property name=\"text\"><string>ActionLabel</string></property>\n"
                         "</widget>\n");
}

QString ActionLabelPlugin::includeFile() const
{
    return QLatin1String("actionlabel.h");
}
