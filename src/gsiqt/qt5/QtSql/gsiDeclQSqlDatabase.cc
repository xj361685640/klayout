
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQSqlDatabase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlDriverCreatorBase>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include "gsiQt.h"
#include "gsiQtSqlCommon.h"
#include "gsiDeclQtSqlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlDatabase

//  Constructor QSqlDatabase::QSqlDatabase()


static void _init_ctor_QSqlDatabase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSqlDatabase> ();
}

static void _call_ctor_QSqlDatabase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlDatabase *> (new QSqlDatabase ());
}


//  Constructor QSqlDatabase::QSqlDatabase(const QSqlDatabase &other)


static void _init_ctor_QSqlDatabase_2487 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlDatabase & > (argspec_0);
  decl->set_return_new<QSqlDatabase> ();
}

static void _call_ctor_QSqlDatabase_2487 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlDatabase &arg1 = gsi::arg_reader<const QSqlDatabase & >() (args, heap);
  ret.write<QSqlDatabase *> (new QSqlDatabase (arg1));
}


// void QSqlDatabase::close()


static void _init_f_close_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_close_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->close ();
}


// bool QSqlDatabase::commit()


static void _init_f_commit_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_commit_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->commit ());
}


// QString QSqlDatabase::connectOptions()


static void _init_f_connectOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_connectOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->connectOptions ());
}


// QString QSqlDatabase::connectionName()


static void _init_f_connectionName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_connectionName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->connectionName ());
}


// QString QSqlDatabase::databaseName()


static void _init_f_databaseName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_databaseName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->databaseName ());
}


// QSqlDriver *QSqlDatabase::driver()


static void _init_f_driver_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlDriver * > ();
}

static void _call_f_driver_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlDriver * > ((QSqlDriver *)((QSqlDatabase *)cls)->driver ());
}


// QString QSqlDatabase::driverName()


static void _init_f_driverName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_driverName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->driverName ());
}


// QSqlQuery QSqlDatabase::exec(const QString &query)


static void _init_f_exec_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSqlQuery > ();
}

static void _call_f_exec_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QSqlQuery > ((QSqlQuery)((QSqlDatabase *)cls)->exec (arg1));
}


// QString QSqlDatabase::hostName()


static void _init_f_hostName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_hostName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->hostName ());
}


// bool QSqlDatabase::isOpen()


static void _init_f_isOpen_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isOpen_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->isOpen ());
}


// bool QSqlDatabase::isOpenError()


static void _init_f_isOpenError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isOpenError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->isOpenError ());
}


// bool QSqlDatabase::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->isValid ());
}


// QSqlError QSqlDatabase::lastError()


static void _init_f_lastError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlError > ();
}

static void _call_f_lastError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlError > ((QSqlError)((QSqlDatabase *)cls)->lastError ());
}


// QSql::NumericalPrecisionPolicy QSqlDatabase::numericalPrecisionPolicy()


static void _init_f_numericalPrecisionPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type > ();
}

static void _call_f_numericalPrecisionPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type > ((qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type)qt_gsi::CppToQtAdaptor<QSql::NumericalPrecisionPolicy>(((QSqlDatabase *)cls)->numericalPrecisionPolicy ()));
}


// bool QSqlDatabase::open()


static void _init_f_open_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_open_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->open ());
}


// bool QSqlDatabase::open(const QString &user, const QString &password)


static void _init_f_open_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("user");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("password");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_open_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->open (arg1, arg2));
}


// QSqlDatabase &QSqlDatabase::operator=(const QSqlDatabase &other)


static void _init_f_operator_eq__2487 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlDatabase & > (argspec_0);
  decl->set_return<QSqlDatabase & > ();
}

static void _call_f_operator_eq__2487 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlDatabase &arg1 = gsi::arg_reader<const QSqlDatabase & >() (args, heap);
  ret.write<QSqlDatabase & > ((QSqlDatabase &)((QSqlDatabase *)cls)->operator= (arg1));
}


// QString QSqlDatabase::password()


static void _init_f_password_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_password_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->password ());
}


// int QSqlDatabase::port()


static void _init_f_port_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_port_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlDatabase *)cls)->port ());
}


// QSqlIndex QSqlDatabase::primaryIndex(const QString &tablename)


static void _init_f_primaryIndex_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tablename");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSqlIndex > ();
}

static void _call_f_primaryIndex_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QSqlIndex > ((QSqlIndex)((QSqlDatabase *)cls)->primaryIndex (arg1));
}


// QSqlRecord QSqlDatabase::record(const QString &tablename)


static void _init_f_record_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tablename");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSqlRecord > ();
}

static void _call_f_record_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QSqlRecord > ((QSqlRecord)((QSqlDatabase *)cls)->record (arg1));
}


// bool QSqlDatabase::rollback()


static void _init_f_rollback_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_rollback_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->rollback ());
}


// void QSqlDatabase::setConnectOptions(const QString &options)


static void _init_f_setConnectOptions_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setConnectOptions_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setConnectOptions (arg1);
}


// void QSqlDatabase::setDatabaseName(const QString &name)


static void _init_f_setDatabaseName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDatabaseName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setDatabaseName (arg1);
}


// void QSqlDatabase::setHostName(const QString &host)


static void _init_f_setHostName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("host");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHostName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setHostName (arg1);
}


// void QSqlDatabase::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy precisionPolicy)


static void _init_f_setNumericalPrecisionPolicy_3429 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("precisionPolicy");
  decl->add_arg<const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumericalPrecisionPolicy_3429 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setNumericalPrecisionPolicy (qt_gsi::QtToCppAdaptor<QSql::NumericalPrecisionPolicy>(arg1).cref());
}


// void QSqlDatabase::setPassword(const QString &password)


static void _init_f_setPassword_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("password");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPassword_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setPassword (arg1);
}


// void QSqlDatabase::setPort(int p)


static void _init_f_setPort_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPort_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setPort (arg1);
}


// void QSqlDatabase::setUserName(const QString &name)


static void _init_f_setUserName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUserName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlDatabase *)cls)->setUserName (arg1);
}


// QStringList QSqlDatabase::tables(QSql::TableType type)


static void _init_f_tables_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type", true, "QSql::Tables");
  decl->add_arg<const qt_gsi::Converter<QSql::TableType>::target_type & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_tables_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSql::TableType>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QSql::TableType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSql::TableType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSql::TableType>(heap, QSql::Tables), heap);
  ret.write<QStringList > ((QStringList)((QSqlDatabase *)cls)->tables (qt_gsi::QtToCppAdaptor<QSql::TableType>(arg1).cref()));
}


// bool QSqlDatabase::transaction()


static void _init_f_transaction_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_transaction_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlDatabase *)cls)->transaction ());
}


// QString QSqlDatabase::userName()


static void _init_f_userName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_userName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlDatabase *)cls)->userName ());
}


// static QSqlDatabase QSqlDatabase::addDatabase(const QString &type, const QString &connectionName)


static void _init_f_addDatabase_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("connectionName", true, "QLatin1String(QSqlDatabase::defaultConnection)");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QSqlDatabase > ();
}

static void _call_f_addDatabase_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QLatin1String(QSqlDatabase::defaultConnection), heap);
  ret.write<QSqlDatabase > ((QSqlDatabase)QSqlDatabase::addDatabase (arg1, arg2));
}


// static QSqlDatabase QSqlDatabase::addDatabase(QSqlDriver *driver, const QString &connectionName)


static void _init_f_addDatabase_3544 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("driver");
  decl->add_arg<QSqlDriver * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("connectionName", true, "QLatin1String(QSqlDatabase::defaultConnection)");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QSqlDatabase > ();
}

static void _call_f_addDatabase_3544 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSqlDriver *arg1 = gsi::arg_reader<QSqlDriver * >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QLatin1String(QSqlDatabase::defaultConnection), heap);
  ret.write<QSqlDatabase > ((QSqlDatabase)QSqlDatabase::addDatabase (arg1, arg2));
}


// static QSqlDatabase QSqlDatabase::cloneDatabase(const QSqlDatabase &other, const QString &connectionName)


static void _init_f_cloneDatabase_4404 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlDatabase & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("connectionName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QSqlDatabase > ();
}

static void _call_f_cloneDatabase_4404 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlDatabase &arg1 = gsi::arg_reader<const QSqlDatabase & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QSqlDatabase > ((QSqlDatabase)QSqlDatabase::cloneDatabase (arg1, arg2));
}


// static QStringList QSqlDatabase::connectionNames()


static void _init_f_connectionNames_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_connectionNames_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QSqlDatabase::connectionNames ());
}


// static bool QSqlDatabase::contains(const QString &connectionName)


static void _init_f_contains_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("connectionName", true, "QLatin1String(QSqlDatabase::defaultConnection)");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QLatin1String(QSqlDatabase::defaultConnection), heap);
  ret.write<bool > ((bool)QSqlDatabase::contains (arg1));
}


// static QSqlDatabase QSqlDatabase::database(const QString &connectionName, bool open)


static void _init_f_database_2781 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("connectionName", true, "QLatin1String(QSqlDatabase::defaultConnection)");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("open", true, "true");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<QSqlDatabase > ();
}

static void _call_f_database_2781 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QLatin1String(QSqlDatabase::defaultConnection), heap);
  bool arg2 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (true, heap);
  ret.write<QSqlDatabase > ((QSqlDatabase)QSqlDatabase::database (arg1, arg2));
}


// static QStringList QSqlDatabase::drivers()


static void _init_f_drivers_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_drivers_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QSqlDatabase::drivers ());
}


// static bool QSqlDatabase::isDriverAvailable(const QString &name)


static void _init_f_isDriverAvailable_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isDriverAvailable_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QSqlDatabase::isDriverAvailable (arg1));
}


// static void QSqlDatabase::registerSqlDriver(const QString &name, QSqlDriverCreatorBase *creator)


static void _init_f_registerSqlDriver_4643 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("creator");
  decl->add_arg<QSqlDriverCreatorBase * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_registerSqlDriver_4643 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QSqlDriverCreatorBase *arg2 = gsi::arg_reader<QSqlDriverCreatorBase * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QSqlDatabase::registerSqlDriver (arg1, arg2);
}


// static void QSqlDatabase::removeDatabase(const QString &connectionName)


static void _init_f_removeDatabase_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("connectionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeDatabase_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QSqlDatabase::removeDatabase (arg1);
}



namespace gsi
{

static gsi::Methods methods_QSqlDatabase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlDatabase::QSqlDatabase()\nThis method creates an object of class QSqlDatabase.", &_init_ctor_QSqlDatabase_0, &_call_ctor_QSqlDatabase_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlDatabase::QSqlDatabase(const QSqlDatabase &other)\nThis method creates an object of class QSqlDatabase.", &_init_ctor_QSqlDatabase_2487, &_call_ctor_QSqlDatabase_2487);
  methods += new qt_gsi::GenericMethod ("close", "@brief Method void QSqlDatabase::close()\n", false, &_init_f_close_0, &_call_f_close_0);
  methods += new qt_gsi::GenericMethod ("commit", "@brief Method bool QSqlDatabase::commit()\n", false, &_init_f_commit_0, &_call_f_commit_0);
  methods += new qt_gsi::GenericMethod (":connectOptions", "@brief Method QString QSqlDatabase::connectOptions()\n", true, &_init_f_connectOptions_c0, &_call_f_connectOptions_c0);
  methods += new qt_gsi::GenericMethod ("connectionName", "@brief Method QString QSqlDatabase::connectionName()\n", true, &_init_f_connectionName_c0, &_call_f_connectionName_c0);
  methods += new qt_gsi::GenericMethod (":databaseName", "@brief Method QString QSqlDatabase::databaseName()\n", true, &_init_f_databaseName_c0, &_call_f_databaseName_c0);
  methods += new qt_gsi::GenericMethod ("driver", "@brief Method QSqlDriver *QSqlDatabase::driver()\n", true, &_init_f_driver_c0, &_call_f_driver_c0);
  methods += new qt_gsi::GenericMethod ("driverName", "@brief Method QString QSqlDatabase::driverName()\n", true, &_init_f_driverName_c0, &_call_f_driverName_c0);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method QSqlQuery QSqlDatabase::exec(const QString &query)\n", true, &_init_f_exec_c2025, &_call_f_exec_c2025);
  methods += new qt_gsi::GenericMethod (":hostName", "@brief Method QString QSqlDatabase::hostName()\n", true, &_init_f_hostName_c0, &_call_f_hostName_c0);
  methods += new qt_gsi::GenericMethod ("isOpen?", "@brief Method bool QSqlDatabase::isOpen()\n", true, &_init_f_isOpen_c0, &_call_f_isOpen_c0);
  methods += new qt_gsi::GenericMethod ("isOpenError?", "@brief Method bool QSqlDatabase::isOpenError()\n", true, &_init_f_isOpenError_c0, &_call_f_isOpenError_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSqlDatabase::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("lastError", "@brief Method QSqlError QSqlDatabase::lastError()\n", true, &_init_f_lastError_c0, &_call_f_lastError_c0);
  methods += new qt_gsi::GenericMethod (":numericalPrecisionPolicy", "@brief Method QSql::NumericalPrecisionPolicy QSqlDatabase::numericalPrecisionPolicy()\n", true, &_init_f_numericalPrecisionPolicy_c0, &_call_f_numericalPrecisionPolicy_c0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method bool QSqlDatabase::open()\n", false, &_init_f_open_0, &_call_f_open_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method bool QSqlDatabase::open(const QString &user, const QString &password)\n", false, &_init_f_open_3942, &_call_f_open_3942);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSqlDatabase &QSqlDatabase::operator=(const QSqlDatabase &other)\n", false, &_init_f_operator_eq__2487, &_call_f_operator_eq__2487);
  methods += new qt_gsi::GenericMethod (":password", "@brief Method QString QSqlDatabase::password()\n", true, &_init_f_password_c0, &_call_f_password_c0);
  methods += new qt_gsi::GenericMethod (":port", "@brief Method int QSqlDatabase::port()\n", true, &_init_f_port_c0, &_call_f_port_c0);
  methods += new qt_gsi::GenericMethod ("primaryIndex", "@brief Method QSqlIndex QSqlDatabase::primaryIndex(const QString &tablename)\n", true, &_init_f_primaryIndex_c2025, &_call_f_primaryIndex_c2025);
  methods += new qt_gsi::GenericMethod ("record", "@brief Method QSqlRecord QSqlDatabase::record(const QString &tablename)\n", true, &_init_f_record_c2025, &_call_f_record_c2025);
  methods += new qt_gsi::GenericMethod ("rollback", "@brief Method bool QSqlDatabase::rollback()\n", false, &_init_f_rollback_0, &_call_f_rollback_0);
  methods += new qt_gsi::GenericMethod ("setConnectOptions|connectOptions=", "@brief Method void QSqlDatabase::setConnectOptions(const QString &options)\n", false, &_init_f_setConnectOptions_2025, &_call_f_setConnectOptions_2025);
  methods += new qt_gsi::GenericMethod ("setDatabaseName|databaseName=", "@brief Method void QSqlDatabase::setDatabaseName(const QString &name)\n", false, &_init_f_setDatabaseName_2025, &_call_f_setDatabaseName_2025);
  methods += new qt_gsi::GenericMethod ("setHostName|hostName=", "@brief Method void QSqlDatabase::setHostName(const QString &host)\n", false, &_init_f_setHostName_2025, &_call_f_setHostName_2025);
  methods += new qt_gsi::GenericMethod ("setNumericalPrecisionPolicy|numericalPrecisionPolicy=", "@brief Method void QSqlDatabase::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy precisionPolicy)\n", false, &_init_f_setNumericalPrecisionPolicy_3429, &_call_f_setNumericalPrecisionPolicy_3429);
  methods += new qt_gsi::GenericMethod ("setPassword|password=", "@brief Method void QSqlDatabase::setPassword(const QString &password)\n", false, &_init_f_setPassword_2025, &_call_f_setPassword_2025);
  methods += new qt_gsi::GenericMethod ("setPort|port=", "@brief Method void QSqlDatabase::setPort(int p)\n", false, &_init_f_setPort_767, &_call_f_setPort_767);
  methods += new qt_gsi::GenericMethod ("setUserName|userName=", "@brief Method void QSqlDatabase::setUserName(const QString &name)\n", false, &_init_f_setUserName_2025, &_call_f_setUserName_2025);
  methods += new qt_gsi::GenericMethod ("tables", "@brief Method QStringList QSqlDatabase::tables(QSql::TableType type)\n", true, &_init_f_tables_c1843, &_call_f_tables_c1843);
  methods += new qt_gsi::GenericMethod ("transaction", "@brief Method bool QSqlDatabase::transaction()\n", false, &_init_f_transaction_0, &_call_f_transaction_0);
  methods += new qt_gsi::GenericMethod (":userName", "@brief Method QString QSqlDatabase::userName()\n", true, &_init_f_userName_c0, &_call_f_userName_c0);
  methods += new qt_gsi::GenericStaticMethod ("addDatabase", "@brief Static method QSqlDatabase QSqlDatabase::addDatabase(const QString &type, const QString &connectionName)\nThis method is static and can be called without an instance.", &_init_f_addDatabase_3942, &_call_f_addDatabase_3942);
  methods += new qt_gsi::GenericStaticMethod ("addDatabase", "@brief Static method QSqlDatabase QSqlDatabase::addDatabase(QSqlDriver *driver, const QString &connectionName)\nThis method is static and can be called without an instance.", &_init_f_addDatabase_3544, &_call_f_addDatabase_3544);
  methods += new qt_gsi::GenericStaticMethod ("cloneDatabase", "@brief Static method QSqlDatabase QSqlDatabase::cloneDatabase(const QSqlDatabase &other, const QString &connectionName)\nThis method is static and can be called without an instance.", &_init_f_cloneDatabase_4404, &_call_f_cloneDatabase_4404);
  methods += new qt_gsi::GenericStaticMethod ("connectionNames", "@brief Static method QStringList QSqlDatabase::connectionNames()\nThis method is static and can be called without an instance.", &_init_f_connectionNames_0, &_call_f_connectionNames_0);
  methods += new qt_gsi::GenericStaticMethod ("contains", "@brief Static method bool QSqlDatabase::contains(const QString &connectionName)\nThis method is static and can be called without an instance.", &_init_f_contains_2025, &_call_f_contains_2025);
  methods += new qt_gsi::GenericStaticMethod ("database", "@brief Static method QSqlDatabase QSqlDatabase::database(const QString &connectionName, bool open)\nThis method is static and can be called without an instance.", &_init_f_database_2781, &_call_f_database_2781);
  methods += new qt_gsi::GenericStaticMethod ("drivers", "@brief Static method QStringList QSqlDatabase::drivers()\nThis method is static and can be called without an instance.", &_init_f_drivers_0, &_call_f_drivers_0);
  methods += new qt_gsi::GenericStaticMethod ("isDriverAvailable?", "@brief Static method bool QSqlDatabase::isDriverAvailable(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_isDriverAvailable_2025, &_call_f_isDriverAvailable_2025);
  methods += new qt_gsi::GenericStaticMethod ("registerSqlDriver", "@brief Static method void QSqlDatabase::registerSqlDriver(const QString &name, QSqlDriverCreatorBase *creator)\nThis method is static and can be called without an instance.", &_init_f_registerSqlDriver_4643, &_call_f_registerSqlDriver_4643);
  methods += new qt_gsi::GenericStaticMethod ("removeDatabase", "@brief Static method void QSqlDatabase::removeDatabase(const QString &connectionName)\nThis method is static and can be called without an instance.", &_init_f_removeDatabase_2025, &_call_f_removeDatabase_2025);
  return methods;
}

gsi::Class<QSqlDatabase> decl_QSqlDatabase ("QtSql", "QSqlDatabase",
  methods_QSqlDatabase (),
  "@qt\n@brief Binding of QSqlDatabase");


GSI_QTSQL_PUBLIC gsi::Class<QSqlDatabase> &qtdecl_QSqlDatabase () { return decl_QSqlDatabase; }

}

