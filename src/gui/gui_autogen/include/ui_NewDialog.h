/********************************************************************************
** Form generated from reading UI file 'NewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIALOG_H
#define UI_NEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *preset_box;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *preset_no_pipeline;
    QRadioButton *preset_no_pipeline_cache;
    QRadioButton *preset_pipelined_bare;
    QRadioButton *preset_pipelined;
    QRadioButton *preset_custom;
    QCheckBox *reset_at_compile;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *elf_file;
    QPushButton *pushButton_browse;
    QWidget *tab_core;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayoutIsa;
    QCheckBox *pipelined;
    QCheckBox *xlen_64bit;
    QCheckBox *isa_atomic;
    QCheckBox *delay_slot;
    QCheckBox *isa_multiply;
    QGroupBox *hazard_unit;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *hazard_stall;
    QRadioButton *hazard_stall_forward;
    QSpacerItem *verticalSpacer;
    QWidget *tab_memory;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *mem_protec_write;
    QCheckBox *mem_protec_exec;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_read;
    QSpinBox *mem_time_read;
    QLabel *label_write;
    QSpinBox *mem_time_write;
    QLabel *label_burts_enable;
    QCheckBox *mem_enable_burst;
    QLabel *label_burts;
    QSpinBox *mem_time_burst;
    QLabel *label_level2;
    QSpinBox *mem_time_level2;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_cache_program;
    QWidget *tab_cache_data;
    QWidget *tab_cache_level2;
    QWidget *tab_os_emulation;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *osemu_enable;
    QCheckBox *osemu_known_syscall_stop;
    QCheckBox *osemu_unknown_syscall_stop;
    QCheckBox *osemu_interrupt_stop;
    QCheckBox *osemu_exception_stop;
    QHBoxLayout *horizontalLayout;
    QLabel *label_fs_root;
    QLineEdit *osemu_fs_root;
    QPushButton *osemu_fs_root_browse;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_example;
    QPushButton *pushButton_start_empty;
    QPushButton *pushButton_load;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *NewDialog)
    {
        if (NewDialog->objectName().isEmpty())
            NewDialog->setObjectName(QString::fromUtf8("NewDialog"));
        NewDialog->resize(558, 353);
        NewDialog->setModal(true);
        verticalLayout = new QVBoxLayout(NewDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        tabWidget = new QTabWidget(NewDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        preset_box = new QGroupBox(tab);
        preset_box->setObjectName(QString::fromUtf8("preset_box"));
        verticalLayout_6 = new QVBoxLayout(preset_box);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        preset_no_pipeline = new QRadioButton(preset_box);
        preset_no_pipeline->setObjectName(QString::fromUtf8("preset_no_pipeline"));

        verticalLayout_6->addWidget(preset_no_pipeline);

        preset_no_pipeline_cache = new QRadioButton(preset_box);
        preset_no_pipeline_cache->setObjectName(QString::fromUtf8("preset_no_pipeline_cache"));

        verticalLayout_6->addWidget(preset_no_pipeline_cache);

        preset_pipelined_bare = new QRadioButton(preset_box);
        preset_pipelined_bare->setObjectName(QString::fromUtf8("preset_pipelined_bare"));

        verticalLayout_6->addWidget(preset_pipelined_bare);

        preset_pipelined = new QRadioButton(preset_box);
        preset_pipelined->setObjectName(QString::fromUtf8("preset_pipelined"));

        verticalLayout_6->addWidget(preset_pipelined);

        preset_custom = new QRadioButton(preset_box);
        preset_custom->setObjectName(QString::fromUtf8("preset_custom"));

        verticalLayout_6->addWidget(preset_custom);


        verticalLayout_5->addWidget(preset_box);

        reset_at_compile = new QCheckBox(tab);
        reset_at_compile->setObjectName(QString::fromUtf8("reset_at_compile"));

        verticalLayout_5->addWidget(reset_at_compile);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        elf_file = new QLineEdit(tab);
        elf_file->setObjectName(QString::fromUtf8("elf_file"));

        horizontalLayout_3->addWidget(elf_file);

        pushButton_browse = new QPushButton(tab);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));

        horizontalLayout_3->addWidget(pushButton_browse);


        verticalLayout_5->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_core = new QWidget();
        tab_core->setObjectName(QString::fromUtf8("tab_core"));
        verticalLayout_2 = new QVBoxLayout(tab_core);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayoutIsa = new QGridLayout();
        gridLayoutIsa->setObjectName(QString::fromUtf8("gridLayoutIsa"));
        pipelined = new QCheckBox(tab_core);
        pipelined->setObjectName(QString::fromUtf8("pipelined"));

        gridLayoutIsa->addWidget(pipelined, 0, 0, 1, 1);

        xlen_64bit = new QCheckBox(tab_core);
        xlen_64bit->setObjectName(QString::fromUtf8("xlen_64bit"));

        gridLayoutIsa->addWidget(xlen_64bit, 0, 1, 1, 1);

        isa_atomic = new QCheckBox(tab_core);
        isa_atomic->setObjectName(QString::fromUtf8("isa_atomic"));

        gridLayoutIsa->addWidget(isa_atomic, 0, 2, 1, 1);

        delay_slot = new QCheckBox(tab_core);
        delay_slot->setObjectName(QString::fromUtf8("delay_slot"));

        gridLayoutIsa->addWidget(delay_slot, 1, 0, 1, 1);

        isa_multiply = new QCheckBox(tab_core);
        isa_multiply->setObjectName(QString::fromUtf8("isa_multiply"));

        gridLayoutIsa->addWidget(isa_multiply, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayoutIsa);

        hazard_unit = new QGroupBox(tab_core);
        hazard_unit->setObjectName(QString::fromUtf8("hazard_unit"));
        hazard_unit->setCheckable(true);
        hazard_unit->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(hazard_unit);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hazard_stall = new QRadioButton(hazard_unit);
        hazard_stall->setObjectName(QString::fromUtf8("hazard_stall"));

        verticalLayout_3->addWidget(hazard_stall);

        hazard_stall_forward = new QRadioButton(hazard_unit);
        hazard_stall_forward->setObjectName(QString::fromUtf8("hazard_stall_forward"));
        hazard_stall_forward->setChecked(true);

        verticalLayout_3->addWidget(hazard_stall_forward);


        verticalLayout_2->addWidget(hazard_unit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_core, QString());
        tab_memory = new QWidget();
        tab_memory->setObjectName(QString::fromUtf8("tab_memory"));
        verticalLayout_4 = new QVBoxLayout(tab_memory);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mem_protec_write = new QCheckBox(tab_memory);
        mem_protec_write->setObjectName(QString::fromUtf8("mem_protec_write"));

        verticalLayout_4->addWidget(mem_protec_write);

        mem_protec_exec = new QCheckBox(tab_memory);
        mem_protec_exec->setObjectName(QString::fromUtf8("mem_protec_exec"));

        verticalLayout_4->addWidget(mem_protec_exec);

        groupBox = new QGroupBox(tab_memory);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_read = new QLabel(groupBox);
        label_read->setObjectName(QString::fromUtf8("label_read"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_read);

        mem_time_read = new QSpinBox(groupBox);
        mem_time_read->setObjectName(QString::fromUtf8("mem_time_read"));
        mem_time_read->setMinimum(1);
        mem_time_read->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, mem_time_read);

        label_write = new QLabel(groupBox);
        label_write->setObjectName(QString::fromUtf8("label_write"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_write);

        mem_time_write = new QSpinBox(groupBox);
        mem_time_write->setObjectName(QString::fromUtf8("mem_time_write"));
        mem_time_write->setMinimum(1);
        mem_time_write->setMaximum(999999999);

        formLayout->setWidget(1, QFormLayout::FieldRole, mem_time_write);

        label_burts_enable = new QLabel(groupBox);
        label_burts_enable->setObjectName(QString::fromUtf8("label_burts_enable"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_burts_enable);

        mem_enable_burst = new QCheckBox(groupBox);
        mem_enable_burst->setObjectName(QString::fromUtf8("mem_enable_burst"));
        mem_enable_burst->setChecked(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, mem_enable_burst);

        label_burts = new QLabel(groupBox);
        label_burts->setObjectName(QString::fromUtf8("label_burts"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_burts);

        mem_time_burst = new QSpinBox(groupBox);
        mem_time_burst->setObjectName(QString::fromUtf8("mem_time_burst"));
        mem_time_burst->setMinimum(0);
        mem_time_burst->setMaximum(999999999);

        formLayout->setWidget(3, QFormLayout::FieldRole, mem_time_burst);

        label_level2 = new QLabel(groupBox);
        label_level2->setObjectName(QString::fromUtf8("label_level2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_level2);

        mem_time_level2 = new QSpinBox(groupBox);
        mem_time_level2->setObjectName(QString::fromUtf8("mem_time_level2"));
        mem_time_level2->setMinimum(0);
        mem_time_level2->setMaximum(999999999);

        formLayout->setWidget(4, QFormLayout::FieldRole, mem_time_level2);


        verticalLayout_4->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_memory, QString());
        tab_cache_program = new QWidget();
        tab_cache_program->setObjectName(QString::fromUtf8("tab_cache_program"));
        tabWidget->addTab(tab_cache_program, QString());
        tab_cache_data = new QWidget();
        tab_cache_data->setObjectName(QString::fromUtf8("tab_cache_data"));
        tabWidget->addTab(tab_cache_data, QString());
        tab_cache_level2 = new QWidget();
        tab_cache_level2->setObjectName(QString::fromUtf8("tab_cache_level2"));
        tabWidget->addTab(tab_cache_level2, QString());
        tab_os_emulation = new QWidget();
        tab_os_emulation->setObjectName(QString::fromUtf8("tab_os_emulation"));
        tab_os_emulation->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(tab_os_emulation);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        osemu_enable = new QCheckBox(tab_os_emulation);
        osemu_enable->setObjectName(QString::fromUtf8("osemu_enable"));
        osemu_enable->setChecked(true);

        verticalLayout_7->addWidget(osemu_enable);

        osemu_known_syscall_stop = new QCheckBox(tab_os_emulation);
        osemu_known_syscall_stop->setObjectName(QString::fromUtf8("osemu_known_syscall_stop"));
        osemu_known_syscall_stop->setChecked(true);

        verticalLayout_7->addWidget(osemu_known_syscall_stop);

        osemu_unknown_syscall_stop = new QCheckBox(tab_os_emulation);
        osemu_unknown_syscall_stop->setObjectName(QString::fromUtf8("osemu_unknown_syscall_stop"));
        osemu_unknown_syscall_stop->setChecked(true);

        verticalLayout_7->addWidget(osemu_unknown_syscall_stop);

        osemu_interrupt_stop = new QCheckBox(tab_os_emulation);
        osemu_interrupt_stop->setObjectName(QString::fromUtf8("osemu_interrupt_stop"));
        osemu_interrupt_stop->setChecked(true);

        verticalLayout_7->addWidget(osemu_interrupt_stop);

        osemu_exception_stop = new QCheckBox(tab_os_emulation);
        osemu_exception_stop->setObjectName(QString::fromUtf8("osemu_exception_stop"));
        osemu_exception_stop->setChecked(true);

        verticalLayout_7->addWidget(osemu_exception_stop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_fs_root = new QLabel(tab_os_emulation);
        label_fs_root->setObjectName(QString::fromUtf8("label_fs_root"));

        horizontalLayout->addWidget(label_fs_root);

        osemu_fs_root = new QLineEdit(tab_os_emulation);
        osemu_fs_root->setObjectName(QString::fromUtf8("osemu_fs_root"));

        horizontalLayout->addWidget(osemu_fs_root);

        osemu_fs_root_browse = new QPushButton(tab_os_emulation);
        osemu_fs_root_browse->setObjectName(QString::fromUtf8("osemu_fs_root_browse"));

        horizontalLayout->addWidget(osemu_fs_root_browse);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(21, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_os_emulation, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 9, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_example = new QPushButton(NewDialog);
        pushButton_example->setObjectName(QString::fromUtf8("pushButton_example"));

        horizontalLayout_2->addWidget(pushButton_example);

        pushButton_start_empty = new QPushButton(NewDialog);
        pushButton_start_empty->setObjectName(QString::fromUtf8("pushButton_start_empty"));

        horizontalLayout_2->addWidget(pushButton_start_empty);

        pushButton_load = new QPushButton(NewDialog);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));

        horizontalLayout_2->addWidget(pushButton_load);

        pushButton_cancel = new QPushButton(NewDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout_2->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewDialog);

        tabWidget->setCurrentIndex(0);
        pushButton_load->setDefault(true);


        QMetaObject::connectSlotsByName(NewDialog);
    } // setupUi

    void retranslateUi(QDialog *NewDialog)
    {
        NewDialog->setWindowTitle(QCoreApplication::translate("NewDialog", "Dialog", nullptr));
        preset_box->setTitle(QCoreApplication::translate("NewDialog", "Preset", nullptr));
        preset_no_pipeline->setText(QCoreApplication::translate("NewDialog", "No pipeline no cache", nullptr));
        preset_no_pipeline_cache->setText(QCoreApplication::translate("NewDialog", "No pipeline with cache", nullptr));
        preset_pipelined_bare->setText(QCoreApplication::translate("NewDialog", "Pipelined without hazard unit and without cache", nullptr));
        preset_pipelined->setText(QCoreApplication::translate("NewDialog", "Pipelined with hazard unit and cache", nullptr));
        preset_custom->setText(QCoreApplication::translate("NewDialog", "Custom", nullptr));
        reset_at_compile->setText(QCoreApplication::translate("NewDialog", "Reset at compile time (reload after make)", nullptr));
        label->setText(QCoreApplication::translate("NewDialog", "Elf executable: ", nullptr));
        pushButton_browse->setText(QCoreApplication::translate("NewDialog", "Browse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NewDialog", "Basic", nullptr));
        pipelined->setText(QCoreApplication::translate("NewDialog", "Pipelined", nullptr));
        xlen_64bit->setText(QCoreApplication::translate("NewDialog", "XLEN 64-bit", nullptr));
        isa_atomic->setText(QCoreApplication::translate("NewDialog", "Atomic (A)", nullptr));
        delay_slot->setText(QCoreApplication::translate("NewDialog", "Delay slot", nullptr));
        isa_multiply->setText(QCoreApplication::translate("NewDialog", "Multiply (M)", nullptr));
        hazard_unit->setTitle(QCoreApplication::translate("NewDialog", "Hazard unit", nullptr));
        hazard_stall->setText(QCoreApplication::translate("NewDialog", "Stall when hazard is detected", nullptr));
        hazard_stall_forward->setText(QCoreApplication::translate("NewDialog", "Stall or forward when hazard is detected", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_core), QCoreApplication::translate("NewDialog", "Core", nullptr));
        mem_protec_write->setText(QCoreApplication::translate("NewDialog", "Program memory write protection", nullptr));
        mem_protec_exec->setText(QCoreApplication::translate("NewDialog", "Data memory executable protection", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewDialog", "Access time (in cycles)", nullptr));
        label_read->setText(QCoreApplication::translate("NewDialog", "Read:", nullptr));
        label_write->setText(QCoreApplication::translate("NewDialog", "Write:", nullptr));
        label_burts_enable->setText(QCoreApplication::translate("NewDialog", "Burst enable:", nullptr));
        label_burts->setText(QCoreApplication::translate("NewDialog", "Burst:", nullptr));
        label_level2->setText(QCoreApplication::translate("NewDialog", "L2 Access:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_memory), QCoreApplication::translate("NewDialog", "Memory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cache_program), QCoreApplication::translate("NewDialog", "Program cache", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cache_data), QCoreApplication::translate("NewDialog", "Data cache", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cache_level2), QCoreApplication::translate("NewDialog", "L2 cache", nullptr));
        osemu_enable->setText(QCoreApplication::translate("NewDialog", "Enable emulation of operating system services", nullptr));
        osemu_known_syscall_stop->setText(QCoreApplication::translate("NewDialog", "Stop on known system call", nullptr));
        osemu_unknown_syscall_stop->setText(QCoreApplication::translate("NewDialog", "Stop on unknown system call", nullptr));
        osemu_interrupt_stop->setText(QCoreApplication::translate("NewDialog", "Stop on interrupt entry", nullptr));
        osemu_exception_stop->setText(QCoreApplication::translate("NewDialog", "Stop and step over exceptions (overflow, etc.)", nullptr));
        label_fs_root->setText(QCoreApplication::translate("NewDialog", "Filesystem root:", nullptr));
        osemu_fs_root_browse->setText(QCoreApplication::translate("NewDialog", "Browse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_os_emulation), QCoreApplication::translate("NewDialog", "OS Emulation", nullptr));
        pushButton_example->setText(QCoreApplication::translate("NewDialog", "Example", nullptr));
        pushButton_start_empty->setText(QCoreApplication::translate("NewDialog", "Start empty", nullptr));
        pushButton_load->setText(QCoreApplication::translate("NewDialog", "Load machine", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("NewDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewDialog: public Ui_NewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIALOG_H
