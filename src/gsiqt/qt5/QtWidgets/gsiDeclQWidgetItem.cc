
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
*  @file gsiDeclQWidgetItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWidgetItem>
#include <QLayout>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWidgetItem

// QFlags<QSizePolicy::ControlType> QWidgetItem::controlTypes()


static void _init_f_controlTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QSizePolicy::ControlType> > ();
}

static void _call_f_controlTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QSizePolicy::ControlType> > ((QFlags<QSizePolicy::ControlType>)((QWidgetItem *)cls)->controlTypes ());
}


// QFlags<Qt::Orientation> QWidgetItem::expandingDirections()


static void _init_f_expandingDirections_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::Orientation> > ();
}

static void _call_f_expandingDirections_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::Orientation> > ((QFlags<Qt::Orientation>)((QWidgetItem *)cls)->expandingDirections ());
}


// QRect QWidgetItem::geometry()


static void _init_f_geometry_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_geometry_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QWidgetItem *)cls)->geometry ());
}


// bool QWidgetItem::hasHeightForWidth()


static void _init_f_hasHeightForWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasHeightForWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWidgetItem *)cls)->hasHeightForWidth ());
}


// int QWidgetItem::heightForWidth(int)


static void _init_f_heightForWidth_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_heightForWidth_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QWidgetItem *)cls)->heightForWidth (arg1));
}


// bool QWidgetItem::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWidgetItem *)cls)->isEmpty ());
}


// QSize QWidgetItem::maximumSize()


static void _init_f_maximumSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_maximumSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem *)cls)->maximumSize ());
}


// QSize QWidgetItem::minimumSize()


static void _init_f_minimumSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_minimumSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem *)cls)->minimumSize ());
}


// void QWidgetItem::setGeometry(const QRect &)


static void _init_f_setGeometry_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGeometry_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetItem *)cls)->setGeometry (arg1);
}


// QSize QWidgetItem::sizeHint()


static void _init_f_sizeHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_sizeHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem *)cls)->sizeHint ());
}


// QWidget *QWidgetItem::widget()


static void _init_f_widget_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_widget_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QWidgetItem *)cls)->widget ());
}


namespace gsi
{

static gsi::Methods methods_QWidgetItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("controlTypes", "@brief Method QFlags<QSizePolicy::ControlType> QWidgetItem::controlTypes()\nThis is a reimplementation of QLayoutItem::controlTypes", true, &_init_f_controlTypes_c0, &_call_f_controlTypes_c0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@brief Method QFlags<Qt::Orientation> QWidgetItem::expandingDirections()\nThis is a reimplementation of QLayoutItem::expandingDirections", true, &_init_f_expandingDirections_c0, &_call_f_expandingDirections_c0);
  methods += new qt_gsi::GenericMethod (":geometry", "@brief Method QRect QWidgetItem::geometry()\nThis is a reimplementation of QLayoutItem::geometry", true, &_init_f_geometry_c0, &_call_f_geometry_c0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@brief Method bool QWidgetItem::hasHeightForWidth()\nThis is a reimplementation of QLayoutItem::hasHeightForWidth", true, &_init_f_hasHeightForWidth_c0, &_call_f_hasHeightForWidth_c0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@brief Method int QWidgetItem::heightForWidth(int)\nThis is a reimplementation of QLayoutItem::heightForWidth", true, &_init_f_heightForWidth_c767, &_call_f_heightForWidth_c767);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QWidgetItem::isEmpty()\nThis is a reimplementation of QLayoutItem::isEmpty", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@brief Method QSize QWidgetItem::maximumSize()\nThis is a reimplementation of QLayoutItem::maximumSize", true, &_init_f_maximumSize_c0, &_call_f_maximumSize_c0);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@brief Method QSize QWidgetItem::minimumSize()\nThis is a reimplementation of QLayoutItem::minimumSize", true, &_init_f_minimumSize_c0, &_call_f_minimumSize_c0);
  methods += new qt_gsi::GenericMethod ("setGeometry|geometry=", "@brief Method void QWidgetItem::setGeometry(const QRect &)\nThis is a reimplementation of QLayoutItem::setGeometry", false, &_init_f_setGeometry_1792, &_call_f_setGeometry_1792);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@brief Method QSize QWidgetItem::sizeHint()\nThis is a reimplementation of QLayoutItem::sizeHint", true, &_init_f_sizeHint_c0, &_call_f_sizeHint_c0);
  methods += new qt_gsi::GenericMethod ("widget", "@brief Method QWidget *QWidgetItem::widget()\nThis is a reimplementation of QLayoutItem::widget", false, &_init_f_widget_0, &_call_f_widget_0);
  return methods;
}

gsi::Class<QLayoutItem> &qtdecl_QLayoutItem ();

gsi::Class<QWidgetItem> decl_QWidgetItem (qtdecl_QLayoutItem (), "QtWidgets", "QWidgetItem_Native",
  methods_QWidgetItem (),
  "@hide\n@alias QWidgetItem");

GSI_QTWIDGETS_PUBLIC gsi::Class<QWidgetItem> &qtdecl_QWidgetItem () { return decl_QWidgetItem; }

}


class QWidgetItem_Adaptor : public QWidgetItem, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWidgetItem_Adaptor();

  //  [adaptor ctor] QWidgetItem::QWidgetItem(QWidget *w)
  QWidgetItem_Adaptor(QWidget *w) : QWidgetItem(w)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QFlags<QSizePolicy::ControlType> QWidgetItem::controlTypes()
  QFlags<QSizePolicy::ControlType> cbs_controlTypes_c0_0() const
  {
    return QWidgetItem::controlTypes();
  }

  virtual QFlags<QSizePolicy::ControlType> controlTypes() const
  {
    if (cb_controlTypes_c0_0.can_issue()) {
      return cb_controlTypes_c0_0.issue<QWidgetItem_Adaptor, QFlags<QSizePolicy::ControlType> >(&QWidgetItem_Adaptor::cbs_controlTypes_c0_0);
    } else {
      return QWidgetItem::controlTypes();
    }
  }

  //  [adaptor impl] QFlags<Qt::Orientation> QWidgetItem::expandingDirections()
  QFlags<Qt::Orientation> cbs_expandingDirections_c0_0() const
  {
    return QWidgetItem::expandingDirections();
  }

  virtual QFlags<Qt::Orientation> expandingDirections() const
  {
    if (cb_expandingDirections_c0_0.can_issue()) {
      return cb_expandingDirections_c0_0.issue<QWidgetItem_Adaptor, QFlags<Qt::Orientation> >(&QWidgetItem_Adaptor::cbs_expandingDirections_c0_0);
    } else {
      return QWidgetItem::expandingDirections();
    }
  }

  //  [adaptor impl] QRect QWidgetItem::geometry()
  QRect cbs_geometry_c0_0() const
  {
    return QWidgetItem::geometry();
  }

  virtual QRect geometry() const
  {
    if (cb_geometry_c0_0.can_issue()) {
      return cb_geometry_c0_0.issue<QWidgetItem_Adaptor, QRect>(&QWidgetItem_Adaptor::cbs_geometry_c0_0);
    } else {
      return QWidgetItem::geometry();
    }
  }

  //  [adaptor impl] bool QWidgetItem::hasHeightForWidth()
  bool cbs_hasHeightForWidth_c0_0() const
  {
    return QWidgetItem::hasHeightForWidth();
  }

  virtual bool hasHeightForWidth() const
  {
    if (cb_hasHeightForWidth_c0_0.can_issue()) {
      return cb_hasHeightForWidth_c0_0.issue<QWidgetItem_Adaptor, bool>(&QWidgetItem_Adaptor::cbs_hasHeightForWidth_c0_0);
    } else {
      return QWidgetItem::hasHeightForWidth();
    }
  }

  //  [adaptor impl] int QWidgetItem::heightForWidth(int)
  int cbs_heightForWidth_c767_0(int arg1) const
  {
    return QWidgetItem::heightForWidth(arg1);
  }

  virtual int heightForWidth(int arg1) const
  {
    if (cb_heightForWidth_c767_0.can_issue()) {
      return cb_heightForWidth_c767_0.issue<QWidgetItem_Adaptor, int, int>(&QWidgetItem_Adaptor::cbs_heightForWidth_c767_0, arg1);
    } else {
      return QWidgetItem::heightForWidth(arg1);
    }
  }

  //  [adaptor impl] void QWidgetItem::invalidate()
  void cbs_invalidate_0_0()
  {
    QWidgetItem::invalidate();
  }

  virtual void invalidate()
  {
    if (cb_invalidate_0_0.can_issue()) {
      cb_invalidate_0_0.issue<QWidgetItem_Adaptor>(&QWidgetItem_Adaptor::cbs_invalidate_0_0);
    } else {
      QWidgetItem::invalidate();
    }
  }

  //  [adaptor impl] bool QWidgetItem::isEmpty()
  bool cbs_isEmpty_c0_0() const
  {
    return QWidgetItem::isEmpty();
  }

  virtual bool isEmpty() const
  {
    if (cb_isEmpty_c0_0.can_issue()) {
      return cb_isEmpty_c0_0.issue<QWidgetItem_Adaptor, bool>(&QWidgetItem_Adaptor::cbs_isEmpty_c0_0);
    } else {
      return QWidgetItem::isEmpty();
    }
  }

  //  [adaptor impl] QLayout *QWidgetItem::layout()
  QLayout * cbs_layout_0_0()
  {
    return QWidgetItem::layout();
  }

  virtual QLayout * layout()
  {
    if (cb_layout_0_0.can_issue()) {
      return cb_layout_0_0.issue<QWidgetItem_Adaptor, QLayout *>(&QWidgetItem_Adaptor::cbs_layout_0_0);
    } else {
      return QWidgetItem::layout();
    }
  }

  //  [adaptor impl] QSize QWidgetItem::maximumSize()
  QSize cbs_maximumSize_c0_0() const
  {
    return QWidgetItem::maximumSize();
  }

  virtual QSize maximumSize() const
  {
    if (cb_maximumSize_c0_0.can_issue()) {
      return cb_maximumSize_c0_0.issue<QWidgetItem_Adaptor, QSize>(&QWidgetItem_Adaptor::cbs_maximumSize_c0_0);
    } else {
      return QWidgetItem::maximumSize();
    }
  }

  //  [adaptor impl] int QWidgetItem::minimumHeightForWidth(int)
  int cbs_minimumHeightForWidth_c767_0(int arg1) const
  {
    return QWidgetItem::minimumHeightForWidth(arg1);
  }

  virtual int minimumHeightForWidth(int arg1) const
  {
    if (cb_minimumHeightForWidth_c767_0.can_issue()) {
      return cb_minimumHeightForWidth_c767_0.issue<QWidgetItem_Adaptor, int, int>(&QWidgetItem_Adaptor::cbs_minimumHeightForWidth_c767_0, arg1);
    } else {
      return QWidgetItem::minimumHeightForWidth(arg1);
    }
  }

  //  [adaptor impl] QSize QWidgetItem::minimumSize()
  QSize cbs_minimumSize_c0_0() const
  {
    return QWidgetItem::minimumSize();
  }

  virtual QSize minimumSize() const
  {
    if (cb_minimumSize_c0_0.can_issue()) {
      return cb_minimumSize_c0_0.issue<QWidgetItem_Adaptor, QSize>(&QWidgetItem_Adaptor::cbs_minimumSize_c0_0);
    } else {
      return QWidgetItem::minimumSize();
    }
  }

  //  [adaptor impl] void QWidgetItem::setGeometry(const QRect &)
  void cbs_setGeometry_1792_0(const QRect &arg1)
  {
    QWidgetItem::setGeometry(arg1);
  }

  virtual void setGeometry(const QRect &arg1)
  {
    if (cb_setGeometry_1792_0.can_issue()) {
      cb_setGeometry_1792_0.issue<QWidgetItem_Adaptor, const QRect &>(&QWidgetItem_Adaptor::cbs_setGeometry_1792_0, arg1);
    } else {
      QWidgetItem::setGeometry(arg1);
    }
  }

  //  [adaptor impl] QSize QWidgetItem::sizeHint()
  QSize cbs_sizeHint_c0_0() const
  {
    return QWidgetItem::sizeHint();
  }

  virtual QSize sizeHint() const
  {
    if (cb_sizeHint_c0_0.can_issue()) {
      return cb_sizeHint_c0_0.issue<QWidgetItem_Adaptor, QSize>(&QWidgetItem_Adaptor::cbs_sizeHint_c0_0);
    } else {
      return QWidgetItem::sizeHint();
    }
  }

  //  [adaptor impl] QSpacerItem *QWidgetItem::spacerItem()
  QSpacerItem * cbs_spacerItem_0_0()
  {
    return QWidgetItem::spacerItem();
  }

  virtual QSpacerItem * spacerItem()
  {
    if (cb_spacerItem_0_0.can_issue()) {
      return cb_spacerItem_0_0.issue<QWidgetItem_Adaptor, QSpacerItem *>(&QWidgetItem_Adaptor::cbs_spacerItem_0_0);
    } else {
      return QWidgetItem::spacerItem();
    }
  }

  //  [adaptor impl] QWidget *QWidgetItem::widget()
  QWidget * cbs_widget_0_0()
  {
    return QWidgetItem::widget();
  }

  virtual QWidget * widget()
  {
    if (cb_widget_0_0.can_issue()) {
      return cb_widget_0_0.issue<QWidgetItem_Adaptor, QWidget *>(&QWidgetItem_Adaptor::cbs_widget_0_0);
    } else {
      return QWidgetItem::widget();
    }
  }

  gsi::Callback cb_controlTypes_c0_0;
  gsi::Callback cb_expandingDirections_c0_0;
  gsi::Callback cb_geometry_c0_0;
  gsi::Callback cb_hasHeightForWidth_c0_0;
  gsi::Callback cb_heightForWidth_c767_0;
  gsi::Callback cb_invalidate_0_0;
  gsi::Callback cb_isEmpty_c0_0;
  gsi::Callback cb_layout_0_0;
  gsi::Callback cb_maximumSize_c0_0;
  gsi::Callback cb_minimumHeightForWidth_c767_0;
  gsi::Callback cb_minimumSize_c0_0;
  gsi::Callback cb_setGeometry_1792_0;
  gsi::Callback cb_sizeHint_c0_0;
  gsi::Callback cb_spacerItem_0_0;
  gsi::Callback cb_widget_0_0;
};

QWidgetItem_Adaptor::~QWidgetItem_Adaptor() { }

//  Constructor QWidgetItem::QWidgetItem(QWidget *w) (adaptor class)

static void _init_ctor_QWidgetItem_Adaptor_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QWidgetItem_Adaptor> ();
}

static void _call_ctor_QWidgetItem_Adaptor_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ret.write<QWidgetItem_Adaptor *> (new QWidgetItem_Adaptor (arg1));
}


// QFlags<QSizePolicy::ControlType> QWidgetItem::controlTypes()

static void _init_cbs_controlTypes_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QSizePolicy::ControlType> > ();
}

static void _call_cbs_controlTypes_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QSizePolicy::ControlType> > ((QFlags<QSizePolicy::ControlType>)((QWidgetItem_Adaptor *)cls)->cbs_controlTypes_c0_0 ());
}

static void _set_callback_cbs_controlTypes_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_controlTypes_c0_0 = cb;
}


// QFlags<Qt::Orientation> QWidgetItem::expandingDirections()

static void _init_cbs_expandingDirections_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::Orientation> > ();
}

static void _call_cbs_expandingDirections_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::Orientation> > ((QFlags<Qt::Orientation>)((QWidgetItem_Adaptor *)cls)->cbs_expandingDirections_c0_0 ());
}

static void _set_callback_cbs_expandingDirections_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_expandingDirections_c0_0 = cb;
}


// QRect QWidgetItem::geometry()

static void _init_cbs_geometry_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_cbs_geometry_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QWidgetItem_Adaptor *)cls)->cbs_geometry_c0_0 ());
}

static void _set_callback_cbs_geometry_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_geometry_c0_0 = cb;
}


// bool QWidgetItem::hasHeightForWidth()

static void _init_cbs_hasHeightForWidth_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_hasHeightForWidth_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWidgetItem_Adaptor *)cls)->cbs_hasHeightForWidth_c0_0 ());
}

static void _set_callback_cbs_hasHeightForWidth_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_hasHeightForWidth_c0_0 = cb;
}


// int QWidgetItem::heightForWidth(int)

static void _init_cbs_heightForWidth_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_heightForWidth_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QWidgetItem_Adaptor *)cls)->cbs_heightForWidth_c767_0 (arg1));
}

static void _set_callback_cbs_heightForWidth_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_heightForWidth_c767_0 = cb;
}


// void QWidgetItem::invalidate()

static void _init_cbs_invalidate_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_invalidate_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetItem_Adaptor *)cls)->cbs_invalidate_0_0 ();
}

static void _set_callback_cbs_invalidate_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_invalidate_0_0 = cb;
}


// bool QWidgetItem::isEmpty()

static void _init_cbs_isEmpty_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEmpty_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWidgetItem_Adaptor *)cls)->cbs_isEmpty_c0_0 ());
}

static void _set_callback_cbs_isEmpty_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_isEmpty_c0_0 = cb;
}


// QLayout *QWidgetItem::layout()

static void _init_cbs_layout_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLayout * > ();
}

static void _call_cbs_layout_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLayout * > ((QLayout *)((QWidgetItem_Adaptor *)cls)->cbs_layout_0_0 ());
}

static void _set_callback_cbs_layout_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_layout_0_0 = cb;
}


// QSize QWidgetItem::maximumSize()

static void _init_cbs_maximumSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_maximumSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem_Adaptor *)cls)->cbs_maximumSize_c0_0 ());
}

static void _set_callback_cbs_maximumSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_maximumSize_c0_0 = cb;
}


// int QWidgetItem::minimumHeightForWidth(int)

static void _init_cbs_minimumHeightForWidth_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_minimumHeightForWidth_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QWidgetItem_Adaptor *)cls)->cbs_minimumHeightForWidth_c767_0 (arg1));
}

static void _set_callback_cbs_minimumHeightForWidth_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_minimumHeightForWidth_c767_0 = cb;
}


// QSize QWidgetItem::minimumSize()

static void _init_cbs_minimumSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_minimumSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem_Adaptor *)cls)->cbs_minimumSize_c0_0 ());
}

static void _set_callback_cbs_minimumSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_minimumSize_c0_0 = cb;
}


// void QWidgetItem::setGeometry(const QRect &)

static void _init_cbs_setGeometry_1792_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setGeometry_1792_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetItem_Adaptor *)cls)->cbs_setGeometry_1792_0 (arg1);
}

static void _set_callback_cbs_setGeometry_1792_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_setGeometry_1792_0 = cb;
}


// QSize QWidgetItem::sizeHint()

static void _init_cbs_sizeHint_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_sizeHint_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QWidgetItem_Adaptor *)cls)->cbs_sizeHint_c0_0 ());
}

static void _set_callback_cbs_sizeHint_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_sizeHint_c0_0 = cb;
}


// QSpacerItem *QWidgetItem::spacerItem()

static void _init_cbs_spacerItem_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSpacerItem * > ();
}

static void _call_cbs_spacerItem_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpacerItem * > ((QSpacerItem *)((QWidgetItem_Adaptor *)cls)->cbs_spacerItem_0_0 ());
}

static void _set_callback_cbs_spacerItem_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_spacerItem_0_0 = cb;
}


// QWidget *QWidgetItem::widget()

static void _init_cbs_widget_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_cbs_widget_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QWidgetItem_Adaptor *)cls)->cbs_widget_0_0 ());
}

static void _set_callback_cbs_widget_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetItem_Adaptor *)cls)->cb_widget_0_0 = cb;
}


namespace gsi
{

gsi::Class<QWidgetItem> &qtdecl_QWidgetItem ();

static gsi::Methods methods_QWidgetItem_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWidgetItem::QWidgetItem(QWidget *w)\nThis method creates an object of class QWidgetItem.", &_init_ctor_QWidgetItem_Adaptor_1315, &_call_ctor_QWidgetItem_Adaptor_1315);
  methods += new qt_gsi::GenericMethod ("controlTypes", "@hide", true, &_init_cbs_controlTypes_c0_0, &_call_cbs_controlTypes_c0_0);
  methods += new qt_gsi::GenericMethod ("controlTypes", "@brief Virtual method QFlags<QSizePolicy::ControlType> QWidgetItem::controlTypes()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_controlTypes_c0_0, &_call_cbs_controlTypes_c0_0, &_set_callback_cbs_controlTypes_c0_0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@hide", true, &_init_cbs_expandingDirections_c0_0, &_call_cbs_expandingDirections_c0_0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@brief Virtual method QFlags<Qt::Orientation> QWidgetItem::expandingDirections()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_expandingDirections_c0_0, &_call_cbs_expandingDirections_c0_0, &_set_callback_cbs_expandingDirections_c0_0);
  methods += new qt_gsi::GenericMethod ("geometry", "@hide", true, &_init_cbs_geometry_c0_0, &_call_cbs_geometry_c0_0);
  methods += new qt_gsi::GenericMethod ("geometry", "@brief Virtual method QRect QWidgetItem::geometry()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_geometry_c0_0, &_call_cbs_geometry_c0_0, &_set_callback_cbs_geometry_c0_0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@hide", true, &_init_cbs_hasHeightForWidth_c0_0, &_call_cbs_hasHeightForWidth_c0_0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@brief Virtual method bool QWidgetItem::hasHeightForWidth()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_hasHeightForWidth_c0_0, &_call_cbs_hasHeightForWidth_c0_0, &_set_callback_cbs_hasHeightForWidth_c0_0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@hide", true, &_init_cbs_heightForWidth_c767_0, &_call_cbs_heightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@brief Virtual method int QWidgetItem::heightForWidth(int)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_heightForWidth_c767_0, &_call_cbs_heightForWidth_c767_0, &_set_callback_cbs_heightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@hide", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Virtual method void QWidgetItem::invalidate()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0, &_set_callback_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@hide", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@brief Virtual method bool QWidgetItem::isEmpty()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0, &_set_callback_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("layout", "@hide", false, &_init_cbs_layout_0_0, &_call_cbs_layout_0_0);
  methods += new qt_gsi::GenericMethod ("layout", "@brief Virtual method QLayout *QWidgetItem::layout()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_layout_0_0, &_call_cbs_layout_0_0, &_set_callback_cbs_layout_0_0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@hide", true, &_init_cbs_maximumSize_c0_0, &_call_cbs_maximumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@brief Virtual method QSize QWidgetItem::maximumSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_maximumSize_c0_0, &_call_cbs_maximumSize_c0_0, &_set_callback_cbs_maximumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumHeightForWidth", "@hide", true, &_init_cbs_minimumHeightForWidth_c767_0, &_call_cbs_minimumHeightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("minimumHeightForWidth", "@brief Virtual method int QWidgetItem::minimumHeightForWidth(int)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumHeightForWidth_c767_0, &_call_cbs_minimumHeightForWidth_c767_0, &_set_callback_cbs_minimumHeightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@hide", true, &_init_cbs_minimumSize_c0_0, &_call_cbs_minimumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@brief Virtual method QSize QWidgetItem::minimumSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumSize_c0_0, &_call_cbs_minimumSize_c0_0, &_set_callback_cbs_minimumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@hide", false, &_init_cbs_setGeometry_1792_0, &_call_cbs_setGeometry_1792_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@brief Virtual method void QWidgetItem::setGeometry(const QRect &)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setGeometry_1792_0, &_call_cbs_setGeometry_1792_0, &_set_callback_cbs_setGeometry_1792_0);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@hide", true, &_init_cbs_sizeHint_c0_0, &_call_cbs_sizeHint_c0_0);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@brief Virtual method QSize QWidgetItem::sizeHint()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sizeHint_c0_0, &_call_cbs_sizeHint_c0_0, &_set_callback_cbs_sizeHint_c0_0);
  methods += new qt_gsi::GenericMethod ("spacerItem", "@hide", false, &_init_cbs_spacerItem_0_0, &_call_cbs_spacerItem_0_0);
  methods += new qt_gsi::GenericMethod ("spacerItem", "@brief Virtual method QSpacerItem *QWidgetItem::spacerItem()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_spacerItem_0_0, &_call_cbs_spacerItem_0_0, &_set_callback_cbs_spacerItem_0_0);
  methods += new qt_gsi::GenericMethod ("widget", "@hide", false, &_init_cbs_widget_0_0, &_call_cbs_widget_0_0);
  methods += new qt_gsi::GenericMethod ("widget", "@brief Virtual method QWidget *QWidgetItem::widget()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_widget_0_0, &_call_cbs_widget_0_0, &_set_callback_cbs_widget_0_0);
  return methods;
}

gsi::Class<QWidgetItem_Adaptor> decl_QWidgetItem_Adaptor (qtdecl_QWidgetItem (), "QtWidgets", "QWidgetItem",
  methods_QWidgetItem_Adaptor (),
  "@qt\n@brief Binding of QWidgetItem");

}

