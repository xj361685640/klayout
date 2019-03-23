
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
*  @file gsiDeclQTextLine.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextLine>
#include <QGlyphRun>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextLine

//  Constructor QTextLine::QTextLine()


static void _init_ctor_QTextLine_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextLine> ();
}

static void _call_ctor_QTextLine_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLine *> (new QTextLine ());
}


// double QTextLine::ascent()


static void _init_f_ascent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_ascent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->ascent ());
}


// double QTextLine::cursorToX(int *cursorPos, QTextLine::Edge edge)


static void _init_f_cursorToX_c2664 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursorPos");
  decl->add_arg<int * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("edge", true, "QTextLine::Leading");
  decl->add_arg<const qt_gsi::Converter<QTextLine::Edge>::target_type & > (argspec_1);
  decl->set_return<double > ();
}

static void _call_f_cursorToX_c2664 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int *arg1 = gsi::arg_reader<int * >() (args, heap);
  const qt_gsi::Converter<QTextLine::Edge>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTextLine::Edge>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTextLine::Edge>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTextLine::Edge>(heap, QTextLine::Leading), heap);
  ret.write<double > ((double)((QTextLine *)cls)->cursorToX (arg1, qt_gsi::QtToCppAdaptor<QTextLine::Edge>(arg2).cref()));
}


// double QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge)


static void _init_f_cursorToX_c2478 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursorPos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("edge", true, "QTextLine::Leading");
  decl->add_arg<const qt_gsi::Converter<QTextLine::Edge>::target_type & > (argspec_1);
  decl->set_return<double > ();
}

static void _call_f_cursorToX_c2478 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QTextLine::Edge>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTextLine::Edge>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTextLine::Edge>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTextLine::Edge>(heap, QTextLine::Leading), heap);
  ret.write<double > ((double)((QTextLine *)cls)->cursorToX (arg1, qt_gsi::QtToCppAdaptor<QTextLine::Edge>(arg2).cref()));
}


// double QTextLine::descent()


static void _init_f_descent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_descent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->descent ());
}


// void QTextLine::draw(QPainter *p, const QPointF &point, const QTextLayout::FormatRange *selection)


static void _init_f_draw_c6879 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("point");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("selection", true, "0");
  decl->add_arg<const QTextLayout::FormatRange * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_draw_c6879 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QTextLayout::FormatRange *arg3 = args ? gsi::arg_reader<const QTextLayout::FormatRange * >() (args, heap) : gsi::arg_maker<const QTextLayout::FormatRange * >() (0, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->draw (arg1, arg2, arg3);
}


// QList<QGlyphRun> QTextLine::glyphRuns(int from, int length)


static void _init_f_glyphRuns_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("from", true, "-1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length", true, "-1");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QList<QGlyphRun> > ();
}

static void _call_f_glyphRuns_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QList<QGlyphRun> > ((QList<QGlyphRun>)((QTextLine *)cls)->glyphRuns (arg1, arg2));
}


// double QTextLine::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->height ());
}


// double QTextLine::horizontalAdvance()


static void _init_f_horizontalAdvance_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_horizontalAdvance_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->horizontalAdvance ());
}


// bool QTextLine::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextLine *)cls)->isValid ());
}


// double QTextLine::leading()


static void _init_f_leading_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leading_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->leading ());
}


// bool QTextLine::leadingIncluded()


static void _init_f_leadingIncluded_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_leadingIncluded_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextLine *)cls)->leadingIncluded ());
}


// int QTextLine::lineNumber()


static void _init_f_lineNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextLine *)cls)->lineNumber ());
}


// QRectF QTextLine::naturalTextRect()


static void _init_f_naturalTextRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_naturalTextRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QTextLine *)cls)->naturalTextRect ());
}


// double QTextLine::naturalTextWidth()


static void _init_f_naturalTextWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_naturalTextWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->naturalTextWidth ());
}


// QPointF QTextLine::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QTextLine *)cls)->position ());
}


// QRectF QTextLine::rect()


static void _init_f_rect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_rect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QTextLine *)cls)->rect ());
}


// void QTextLine::setLeadingIncluded(bool included)


static void _init_f_setLeadingIncluded_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("included");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeadingIncluded_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->setLeadingIncluded (arg1);
}


// void QTextLine::setLineWidth(double width)


static void _init_f_setLineWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLineWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->setLineWidth (arg1);
}


// void QTextLine::setNumColumns(int columns)


static void _init_f_setNumColumns_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("columns");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumColumns_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->setNumColumns (arg1);
}


// void QTextLine::setNumColumns(int columns, double alignmentWidth)


static void _init_f_setNumColumns_1730 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("columns");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("alignmentWidth");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setNumColumns_1730 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->setNumColumns (arg1, arg2);
}


// void QTextLine::setPosition(const QPointF &pos)


static void _init_f_setPosition_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPosition_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLine *)cls)->setPosition (arg1);
}


// int QTextLine::textLength()


static void _init_f_textLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_textLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextLine *)cls)->textLength ());
}


// int QTextLine::textStart()


static void _init_f_textStart_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_textStart_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextLine *)cls)->textStart ());
}


// double QTextLine::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->width ());
}


// double QTextLine::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->x ());
}


// int QTextLine::xToCursor(double x, QTextLine::CursorPosition)


static void _init_f_xToCursor_c3900 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2", true, "QTextLine::CursorBetweenCharacters");
  decl->add_arg<const qt_gsi::Converter<QTextLine::CursorPosition>::target_type & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_xToCursor_c3900 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  const qt_gsi::Converter<QTextLine::CursorPosition>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTextLine::CursorPosition>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTextLine::CursorPosition>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTextLine::CursorPosition>(heap, QTextLine::CursorBetweenCharacters), heap);
  ret.write<int > ((int)((QTextLine *)cls)->xToCursor (arg1, qt_gsi::QtToCppAdaptor<QTextLine::CursorPosition>(arg2).cref()));
}


// double QTextLine::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLine *)cls)->y ());
}



namespace gsi
{

static gsi::Methods methods_QTextLine () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextLine::QTextLine()\nThis method creates an object of class QTextLine.", &_init_ctor_QTextLine_0, &_call_ctor_QTextLine_0);
  methods += new qt_gsi::GenericMethod ("ascent", "@brief Method double QTextLine::ascent()\n", true, &_init_f_ascent_c0, &_call_f_ascent_c0);
  methods += new qt_gsi::GenericMethod ("cursorToX", "@brief Method double QTextLine::cursorToX(int *cursorPos, QTextLine::Edge edge)\n", true, &_init_f_cursorToX_c2664, &_call_f_cursorToX_c2664);
  methods += new qt_gsi::GenericMethod ("cursorToX", "@brief Method double QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge)\n", true, &_init_f_cursorToX_c2478, &_call_f_cursorToX_c2478);
  methods += new qt_gsi::GenericMethod ("descent", "@brief Method double QTextLine::descent()\n", true, &_init_f_descent_c0, &_call_f_descent_c0);
  methods += new qt_gsi::GenericMethod ("draw", "@brief Method void QTextLine::draw(QPainter *p, const QPointF &point, const QTextLayout::FormatRange *selection)\n", true, &_init_f_draw_c6879, &_call_f_draw_c6879);
  methods += new qt_gsi::GenericMethod ("glyphRuns", "@brief Method QList<QGlyphRun> QTextLine::glyphRuns(int from, int length)\n", true, &_init_f_glyphRuns_c1426, &_call_f_glyphRuns_c1426);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method double QTextLine::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("horizontalAdvance", "@brief Method double QTextLine::horizontalAdvance()\n", true, &_init_f_horizontalAdvance_c0, &_call_f_horizontalAdvance_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextLine::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("leading", "@brief Method double QTextLine::leading()\n", true, &_init_f_leading_c0, &_call_f_leading_c0);
  methods += new qt_gsi::GenericMethod (":leadingIncluded", "@brief Method bool QTextLine::leadingIncluded()\n", true, &_init_f_leadingIncluded_c0, &_call_f_leadingIncluded_c0);
  methods += new qt_gsi::GenericMethod ("lineNumber", "@brief Method int QTextLine::lineNumber()\n", true, &_init_f_lineNumber_c0, &_call_f_lineNumber_c0);
  methods += new qt_gsi::GenericMethod ("naturalTextRect", "@brief Method QRectF QTextLine::naturalTextRect()\n", true, &_init_f_naturalTextRect_c0, &_call_f_naturalTextRect_c0);
  methods += new qt_gsi::GenericMethod ("naturalTextWidth", "@brief Method double QTextLine::naturalTextWidth()\n", true, &_init_f_naturalTextWidth_c0, &_call_f_naturalTextWidth_c0);
  methods += new qt_gsi::GenericMethod (":position", "@brief Method QPointF QTextLine::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRectF QTextLine::rect()\n", true, &_init_f_rect_c0, &_call_f_rect_c0);
  methods += new qt_gsi::GenericMethod ("setLeadingIncluded|leadingIncluded=", "@brief Method void QTextLine::setLeadingIncluded(bool included)\n", false, &_init_f_setLeadingIncluded_864, &_call_f_setLeadingIncluded_864);
  methods += new qt_gsi::GenericMethod ("setLineWidth", "@brief Method void QTextLine::setLineWidth(double width)\n", false, &_init_f_setLineWidth_1071, &_call_f_setLineWidth_1071);
  methods += new qt_gsi::GenericMethod ("setNumColumns", "@brief Method void QTextLine::setNumColumns(int columns)\n", false, &_init_f_setNumColumns_767, &_call_f_setNumColumns_767);
  methods += new qt_gsi::GenericMethod ("setNumColumns", "@brief Method void QTextLine::setNumColumns(int columns, double alignmentWidth)\n", false, &_init_f_setNumColumns_1730, &_call_f_setNumColumns_1730);
  methods += new qt_gsi::GenericMethod ("setPosition|position=", "@brief Method void QTextLine::setPosition(const QPointF &pos)\n", false, &_init_f_setPosition_1986, &_call_f_setPosition_1986);
  methods += new qt_gsi::GenericMethod ("textLength", "@brief Method int QTextLine::textLength()\n", true, &_init_f_textLength_c0, &_call_f_textLength_c0);
  methods += new qt_gsi::GenericMethod ("textStart", "@brief Method int QTextLine::textStart()\n", true, &_init_f_textStart_c0, &_call_f_textStart_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method double QTextLine::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method double QTextLine::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("xToCursor", "@brief Method int QTextLine::xToCursor(double x, QTextLine::CursorPosition)\n", true, &_init_f_xToCursor_c3900, &_call_f_xToCursor_c3900);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method double QTextLine::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  return methods;
}

gsi::Class<QTextLine> decl_QTextLine ("QtGui", "QTextLine",
  methods_QTextLine (),
  "@qt\n@brief Binding of QTextLine");


GSI_QTGUI_PUBLIC gsi::Class<QTextLine> &qtdecl_QTextLine () { return decl_QTextLine; }

}


//  Implementation of the enum wrapper class for QTextLine::CursorPosition
namespace qt_gsi
{

static gsi::Enum<QTextLine::CursorPosition> decl_QTextLine_CursorPosition_Enum ("QtGui", "QTextLine_CursorPosition",
    gsi::enum_const ("CursorBetweenCharacters", QTextLine::CursorBetweenCharacters, "@brief Enum constant QTextLine::CursorBetweenCharacters") +
    gsi::enum_const ("CursorOnCharacter", QTextLine::CursorOnCharacter, "@brief Enum constant QTextLine::CursorOnCharacter"),
  "@qt\n@brief This class represents the QTextLine::CursorPosition enum");

static gsi::QFlagsClass<QTextLine::CursorPosition > decl_QTextLine_CursorPosition_Enums ("QtGui", "QTextLine_QFlags_CursorPosition",
  "@qt\n@brief This class represents the QFlags<QTextLine::CursorPosition> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextLine> inject_QTextLine_CursorPosition_Enum_in_parent (decl_QTextLine_CursorPosition_Enum.defs ());
static gsi::ClassExt<QTextLine> decl_QTextLine_CursorPosition_Enum_as_child (decl_QTextLine_CursorPosition_Enum, "CursorPosition");
static gsi::ClassExt<QTextLine> decl_QTextLine_CursorPosition_Enums_as_child (decl_QTextLine_CursorPosition_Enums, "QFlags_CursorPosition");

}


//  Implementation of the enum wrapper class for QTextLine::Edge
namespace qt_gsi
{

static gsi::Enum<QTextLine::Edge> decl_QTextLine_Edge_Enum ("QtGui", "QTextLine_Edge",
    gsi::enum_const ("Leading", QTextLine::Leading, "@brief Enum constant QTextLine::Leading") +
    gsi::enum_const ("Trailing", QTextLine::Trailing, "@brief Enum constant QTextLine::Trailing"),
  "@qt\n@brief This class represents the QTextLine::Edge enum");

static gsi::QFlagsClass<QTextLine::Edge > decl_QTextLine_Edge_Enums ("QtGui", "QTextLine_QFlags_Edge",
  "@qt\n@brief This class represents the QFlags<QTextLine::Edge> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextLine> inject_QTextLine_Edge_Enum_in_parent (decl_QTextLine_Edge_Enum.defs ());
static gsi::ClassExt<QTextLine> decl_QTextLine_Edge_Enum_as_child (decl_QTextLine_Edge_Enum, "Edge");
static gsi::ClassExt<QTextLine> decl_QTextLine_Edge_Enums_as_child (decl_QTextLine_Edge_Enums, "QFlags_Edge");

}

