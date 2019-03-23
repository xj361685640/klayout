
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
*  @file gsiDeclQXmlContentHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlContentHandler>
#include <QXmlAttributes>
#include <QXmlLocator>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlContentHandler

// bool QXmlContentHandler::characters(const QString &ch)


static void _init_f_characters_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_characters_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->characters (arg1));
}


// bool QXmlContentHandler::endDocument()


static void _init_f_endDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_endDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->endDocument ());
}


// bool QXmlContentHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)


static void _init_f_endElement_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("qName");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_endElement_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->endElement (arg1, arg2, arg3));
}


// bool QXmlContentHandler::endPrefixMapping(const QString &prefix)


static void _init_f_endPrefixMapping_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("prefix");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_endPrefixMapping_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->endPrefixMapping (arg1));
}


// QString QXmlContentHandler::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlContentHandler *)cls)->errorString ());
}


// bool QXmlContentHandler::ignorableWhitespace(const QString &ch)


static void _init_f_ignorableWhitespace_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_ignorableWhitespace_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->ignorableWhitespace (arg1));
}


// bool QXmlContentHandler::processingInstruction(const QString &target, const QString &data)


static void _init_f_processingInstruction_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_processingInstruction_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->processingInstruction (arg1, arg2));
}


// void QXmlContentHandler::setDocumentLocator(QXmlLocator *locator)


static void _init_f_setDocumentLocator_1732 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locator");
  decl->add_arg<QXmlLocator * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDocumentLocator_1732 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlLocator *arg1 = gsi::arg_reader<QXmlLocator * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlContentHandler *)cls)->setDocumentLocator (arg1);
}


// bool QXmlContentHandler::skippedEntity(const QString &name)


static void _init_f_skippedEntity_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_skippedEntity_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->skippedEntity (arg1));
}


// bool QXmlContentHandler::startDocument()


static void _init_f_startDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_startDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->startDocument ());
}


// bool QXmlContentHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)


static void _init_f_startElement_8513 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("qName");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("atts");
  decl->add_arg<const QXmlAttributes & > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_startElement_8513 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const QXmlAttributes &arg4 = gsi::arg_reader<const QXmlAttributes & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->startElement (arg1, arg2, arg3, arg4));
}


// bool QXmlContentHandler::startPrefixMapping(const QString &prefix, const QString &uri)


static void _init_f_startPrefixMapping_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("prefix");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("uri");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_startPrefixMapping_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlContentHandler *)cls)->startPrefixMapping (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QXmlContentHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("characters", "@brief Method bool QXmlContentHandler::characters(const QString &ch)\n", false, &_init_f_characters_2025, &_call_f_characters_2025);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Method bool QXmlContentHandler::endDocument()\n", false, &_init_f_endDocument_0, &_call_f_endDocument_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Method bool QXmlContentHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)\n", false, &_init_f_endElement_5859, &_call_f_endElement_5859);
  methods += new qt_gsi::GenericMethod ("endPrefixMapping", "@brief Method bool QXmlContentHandler::endPrefixMapping(const QString &prefix)\n", false, &_init_f_endPrefixMapping_2025, &_call_f_endPrefixMapping_2025);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QXmlContentHandler::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("ignorableWhitespace", "@brief Method bool QXmlContentHandler::ignorableWhitespace(const QString &ch)\n", false, &_init_f_ignorableWhitespace_2025, &_call_f_ignorableWhitespace_2025);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Method bool QXmlContentHandler::processingInstruction(const QString &target, const QString &data)\n", false, &_init_f_processingInstruction_3942, &_call_f_processingInstruction_3942);
  methods += new qt_gsi::GenericMethod ("setDocumentLocator", "@brief Method void QXmlContentHandler::setDocumentLocator(QXmlLocator *locator)\n", false, &_init_f_setDocumentLocator_1732, &_call_f_setDocumentLocator_1732);
  methods += new qt_gsi::GenericMethod ("skippedEntity", "@brief Method bool QXmlContentHandler::skippedEntity(const QString &name)\n", false, &_init_f_skippedEntity_2025, &_call_f_skippedEntity_2025);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Method bool QXmlContentHandler::startDocument()\n", false, &_init_f_startDocument_0, &_call_f_startDocument_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Method bool QXmlContentHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)\n", false, &_init_f_startElement_8513, &_call_f_startElement_8513);
  methods += new qt_gsi::GenericMethod ("startPrefixMapping", "@brief Method bool QXmlContentHandler::startPrefixMapping(const QString &prefix, const QString &uri)\n", false, &_init_f_startPrefixMapping_3942, &_call_f_startPrefixMapping_3942);
  return methods;
}

gsi::Class<QXmlContentHandler> decl_QXmlContentHandler ("QtXml", "QXmlContentHandler_Native",
  methods_QXmlContentHandler (),
  "@hide\n@alias QXmlContentHandler");

GSI_QTXML_PUBLIC gsi::Class<QXmlContentHandler> &qtdecl_QXmlContentHandler () { return decl_QXmlContentHandler; }

}


class QXmlContentHandler_Adaptor : public QXmlContentHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlContentHandler_Adaptor();

  //  [adaptor ctor] QXmlContentHandler::QXmlContentHandler()
  QXmlContentHandler_Adaptor() : QXmlContentHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QXmlContentHandler::characters(const QString &ch)
  bool cbs_characters_2025_0(const QString &ch)
  {
    __SUPPRESS_UNUSED_WARNING (ch);
    throw qt_gsi::AbstractMethodCalledException("characters");
  }

  virtual bool characters(const QString &ch)
  {
    if (cb_characters_2025_0.can_issue()) {
      return cb_characters_2025_0.issue<QXmlContentHandler_Adaptor, bool, const QString &>(&QXmlContentHandler_Adaptor::cbs_characters_2025_0, ch);
    } else {
      throw qt_gsi::AbstractMethodCalledException("characters");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::endDocument()
  bool cbs_endDocument_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endDocument");
  }

  virtual bool endDocument()
  {
    if (cb_endDocument_0_0.can_issue()) {
      return cb_endDocument_0_0.issue<QXmlContentHandler_Adaptor, bool>(&QXmlContentHandler_Adaptor::cbs_endDocument_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endDocument");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)
  bool cbs_endElement_5859_0(const QString &namespaceURI, const QString &localName, const QString &qName)
  {
    __SUPPRESS_UNUSED_WARNING (namespaceURI);
    __SUPPRESS_UNUSED_WARNING (localName);
    __SUPPRESS_UNUSED_WARNING (qName);
    throw qt_gsi::AbstractMethodCalledException("endElement");
  }

  virtual bool endElement(const QString &namespaceURI, const QString &localName, const QString &qName)
  {
    if (cb_endElement_5859_0.can_issue()) {
      return cb_endElement_5859_0.issue<QXmlContentHandler_Adaptor, bool, const QString &, const QString &, const QString &>(&QXmlContentHandler_Adaptor::cbs_endElement_5859_0, namespaceURI, localName, qName);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endElement");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::endPrefixMapping(const QString &prefix)
  bool cbs_endPrefixMapping_2025_0(const QString &prefix)
  {
    __SUPPRESS_UNUSED_WARNING (prefix);
    throw qt_gsi::AbstractMethodCalledException("endPrefixMapping");
  }

  virtual bool endPrefixMapping(const QString &prefix)
  {
    if (cb_endPrefixMapping_2025_0.can_issue()) {
      return cb_endPrefixMapping_2025_0.issue<QXmlContentHandler_Adaptor, bool, const QString &>(&QXmlContentHandler_Adaptor::cbs_endPrefixMapping_2025_0, prefix);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endPrefixMapping");
    }
  }

  //  [adaptor impl] QString QXmlContentHandler::errorString()
  QString cbs_errorString_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("errorString");
  }

  virtual QString errorString() const
  {
    if (cb_errorString_c0_0.can_issue()) {
      return cb_errorString_c0_0.issue<QXmlContentHandler_Adaptor, QString>(&QXmlContentHandler_Adaptor::cbs_errorString_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("errorString");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::ignorableWhitespace(const QString &ch)
  bool cbs_ignorableWhitespace_2025_0(const QString &ch)
  {
    __SUPPRESS_UNUSED_WARNING (ch);
    throw qt_gsi::AbstractMethodCalledException("ignorableWhitespace");
  }

  virtual bool ignorableWhitespace(const QString &ch)
  {
    if (cb_ignorableWhitespace_2025_0.can_issue()) {
      return cb_ignorableWhitespace_2025_0.issue<QXmlContentHandler_Adaptor, bool, const QString &>(&QXmlContentHandler_Adaptor::cbs_ignorableWhitespace_2025_0, ch);
    } else {
      throw qt_gsi::AbstractMethodCalledException("ignorableWhitespace");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::processingInstruction(const QString &target, const QString &data)
  bool cbs_processingInstruction_3942_0(const QString &target, const QString &data)
  {
    __SUPPRESS_UNUSED_WARNING (target);
    __SUPPRESS_UNUSED_WARNING (data);
    throw qt_gsi::AbstractMethodCalledException("processingInstruction");
  }

  virtual bool processingInstruction(const QString &target, const QString &data)
  {
    if (cb_processingInstruction_3942_0.can_issue()) {
      return cb_processingInstruction_3942_0.issue<QXmlContentHandler_Adaptor, bool, const QString &, const QString &>(&QXmlContentHandler_Adaptor::cbs_processingInstruction_3942_0, target, data);
    } else {
      throw qt_gsi::AbstractMethodCalledException("processingInstruction");
    }
  }

  //  [adaptor impl] void QXmlContentHandler::setDocumentLocator(QXmlLocator *locator)
  void cbs_setDocumentLocator_1732_0(QXmlLocator *locator)
  {
    __SUPPRESS_UNUSED_WARNING (locator);
    throw qt_gsi::AbstractMethodCalledException("setDocumentLocator");
  }

  virtual void setDocumentLocator(QXmlLocator *locator)
  {
    if (cb_setDocumentLocator_1732_0.can_issue()) {
      cb_setDocumentLocator_1732_0.issue<QXmlContentHandler_Adaptor, QXmlLocator *>(&QXmlContentHandler_Adaptor::cbs_setDocumentLocator_1732_0, locator);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setDocumentLocator");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::skippedEntity(const QString &name)
  bool cbs_skippedEntity_2025_0(const QString &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("skippedEntity");
  }

  virtual bool skippedEntity(const QString &name)
  {
    if (cb_skippedEntity_2025_0.can_issue()) {
      return cb_skippedEntity_2025_0.issue<QXmlContentHandler_Adaptor, bool, const QString &>(&QXmlContentHandler_Adaptor::cbs_skippedEntity_2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("skippedEntity");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::startDocument()
  bool cbs_startDocument_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("startDocument");
  }

  virtual bool startDocument()
  {
    if (cb_startDocument_0_0.can_issue()) {
      return cb_startDocument_0_0.issue<QXmlContentHandler_Adaptor, bool>(&QXmlContentHandler_Adaptor::cbs_startDocument_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startDocument");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)
  bool cbs_startElement_8513_0(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)
  {
    __SUPPRESS_UNUSED_WARNING (namespaceURI);
    __SUPPRESS_UNUSED_WARNING (localName);
    __SUPPRESS_UNUSED_WARNING (qName);
    __SUPPRESS_UNUSED_WARNING (atts);
    throw qt_gsi::AbstractMethodCalledException("startElement");
  }

  virtual bool startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)
  {
    if (cb_startElement_8513_0.can_issue()) {
      return cb_startElement_8513_0.issue<QXmlContentHandler_Adaptor, bool, const QString &, const QString &, const QString &, const QXmlAttributes &>(&QXmlContentHandler_Adaptor::cbs_startElement_8513_0, namespaceURI, localName, qName, atts);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startElement");
    }
  }

  //  [adaptor impl] bool QXmlContentHandler::startPrefixMapping(const QString &prefix, const QString &uri)
  bool cbs_startPrefixMapping_3942_0(const QString &prefix, const QString &uri)
  {
    __SUPPRESS_UNUSED_WARNING (prefix);
    __SUPPRESS_UNUSED_WARNING (uri);
    throw qt_gsi::AbstractMethodCalledException("startPrefixMapping");
  }

  virtual bool startPrefixMapping(const QString &prefix, const QString &uri)
  {
    if (cb_startPrefixMapping_3942_0.can_issue()) {
      return cb_startPrefixMapping_3942_0.issue<QXmlContentHandler_Adaptor, bool, const QString &, const QString &>(&QXmlContentHandler_Adaptor::cbs_startPrefixMapping_3942_0, prefix, uri);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startPrefixMapping");
    }
  }

  gsi::Callback cb_characters_2025_0;
  gsi::Callback cb_endDocument_0_0;
  gsi::Callback cb_endElement_5859_0;
  gsi::Callback cb_endPrefixMapping_2025_0;
  gsi::Callback cb_errorString_c0_0;
  gsi::Callback cb_ignorableWhitespace_2025_0;
  gsi::Callback cb_processingInstruction_3942_0;
  gsi::Callback cb_setDocumentLocator_1732_0;
  gsi::Callback cb_skippedEntity_2025_0;
  gsi::Callback cb_startDocument_0_0;
  gsi::Callback cb_startElement_8513_0;
  gsi::Callback cb_startPrefixMapping_3942_0;
};

QXmlContentHandler_Adaptor::~QXmlContentHandler_Adaptor() { }

//  Constructor QXmlContentHandler::QXmlContentHandler() (adaptor class)

static void _init_ctor_QXmlContentHandler_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlContentHandler_Adaptor> ();
}

static void _call_ctor_QXmlContentHandler_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlContentHandler_Adaptor *> (new QXmlContentHandler_Adaptor ());
}


// bool QXmlContentHandler::characters(const QString &ch)

static void _init_cbs_characters_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_characters_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_characters_2025_0 (arg1));
}

static void _set_callback_cbs_characters_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_characters_2025_0 = cb;
}


// bool QXmlContentHandler::endDocument()

static void _init_cbs_endDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_endDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_endDocument_0_0 ());
}

static void _set_callback_cbs_endDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_endDocument_0_0 = cb;
}


// bool QXmlContentHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)

static void _init_cbs_endElement_5859_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("qName");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_endElement_5859_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_endElement_5859_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_endElement_5859_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_endElement_5859_0 = cb;
}


// bool QXmlContentHandler::endPrefixMapping(const QString &prefix)

static void _init_cbs_endPrefixMapping_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("prefix");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_endPrefixMapping_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_endPrefixMapping_2025_0 (arg1));
}

static void _set_callback_cbs_endPrefixMapping_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_endPrefixMapping_2025_0 = cb;
}


// QString QXmlContentHandler::errorString()

static void _init_cbs_errorString_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_errorString_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlContentHandler_Adaptor *)cls)->cbs_errorString_c0_0 ());
}

static void _set_callback_cbs_errorString_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_errorString_c0_0 = cb;
}


// bool QXmlContentHandler::ignorableWhitespace(const QString &ch)

static void _init_cbs_ignorableWhitespace_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_ignorableWhitespace_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_ignorableWhitespace_2025_0 (arg1));
}

static void _set_callback_cbs_ignorableWhitespace_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_ignorableWhitespace_2025_0 = cb;
}


// bool QXmlContentHandler::processingInstruction(const QString &target, const QString &data)

static void _init_cbs_processingInstruction_3942_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_processingInstruction_3942_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_processingInstruction_3942_0 (arg1, arg2));
}

static void _set_callback_cbs_processingInstruction_3942_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_processingInstruction_3942_0 = cb;
}


// void QXmlContentHandler::setDocumentLocator(QXmlLocator *locator)

static void _init_cbs_setDocumentLocator_1732_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locator");
  decl->add_arg<QXmlLocator * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setDocumentLocator_1732_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlLocator *arg1 = args.read<QXmlLocator * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlContentHandler_Adaptor *)cls)->cbs_setDocumentLocator_1732_0 (arg1);
}

static void _set_callback_cbs_setDocumentLocator_1732_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_setDocumentLocator_1732_0 = cb;
}


// bool QXmlContentHandler::skippedEntity(const QString &name)

static void _init_cbs_skippedEntity_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_skippedEntity_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_skippedEntity_2025_0 (arg1));
}

static void _set_callback_cbs_skippedEntity_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_skippedEntity_2025_0 = cb;
}


// bool QXmlContentHandler::startDocument()

static void _init_cbs_startDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_startDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_startDocument_0_0 ());
}

static void _set_callback_cbs_startDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_startDocument_0_0 = cb;
}


// bool QXmlContentHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)

static void _init_cbs_startElement_8513_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("qName");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("atts");
  decl->add_arg<const QXmlAttributes & > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_cbs_startElement_8513_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  const QXmlAttributes &arg4 = args.read<const QXmlAttributes & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_startElement_8513_0 (arg1, arg2, arg3, arg4));
}

static void _set_callback_cbs_startElement_8513_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_startElement_8513_0 = cb;
}


// bool QXmlContentHandler::startPrefixMapping(const QString &prefix, const QString &uri)

static void _init_cbs_startPrefixMapping_3942_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("prefix");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("uri");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_startPrefixMapping_3942_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlContentHandler_Adaptor *)cls)->cbs_startPrefixMapping_3942_0 (arg1, arg2));
}

static void _set_callback_cbs_startPrefixMapping_3942_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlContentHandler_Adaptor *)cls)->cb_startPrefixMapping_3942_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlContentHandler> &qtdecl_QXmlContentHandler ();

static gsi::Methods methods_QXmlContentHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlContentHandler::QXmlContentHandler()\nThis method creates an object of class QXmlContentHandler.", &_init_ctor_QXmlContentHandler_Adaptor_0, &_call_ctor_QXmlContentHandler_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("characters", "@hide", false, &_init_cbs_characters_2025_0, &_call_cbs_characters_2025_0);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Virtual method bool QXmlContentHandler::characters(const QString &ch)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_characters_2025_0, &_call_cbs_characters_2025_0, &_set_callback_cbs_characters_2025_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@hide", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Virtual method bool QXmlContentHandler::endDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0, &_set_callback_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@hide", false, &_init_cbs_endElement_5859_0, &_call_cbs_endElement_5859_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Virtual method bool QXmlContentHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endElement_5859_0, &_call_cbs_endElement_5859_0, &_set_callback_cbs_endElement_5859_0);
  methods += new qt_gsi::GenericMethod ("endPrefixMapping", "@hide", false, &_init_cbs_endPrefixMapping_2025_0, &_call_cbs_endPrefixMapping_2025_0);
  methods += new qt_gsi::GenericMethod ("endPrefixMapping", "@brief Virtual method bool QXmlContentHandler::endPrefixMapping(const QString &prefix)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endPrefixMapping_2025_0, &_call_cbs_endPrefixMapping_2025_0, &_set_callback_cbs_endPrefixMapping_2025_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@hide", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Virtual method QString QXmlContentHandler::errorString()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0, &_set_callback_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("ignorableWhitespace", "@hide", false, &_init_cbs_ignorableWhitespace_2025_0, &_call_cbs_ignorableWhitespace_2025_0);
  methods += new qt_gsi::GenericMethod ("ignorableWhitespace", "@brief Virtual method bool QXmlContentHandler::ignorableWhitespace(const QString &ch)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_ignorableWhitespace_2025_0, &_call_cbs_ignorableWhitespace_2025_0, &_set_callback_cbs_ignorableWhitespace_2025_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@hide", false, &_init_cbs_processingInstruction_3942_0, &_call_cbs_processingInstruction_3942_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Virtual method bool QXmlContentHandler::processingInstruction(const QString &target, const QString &data)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_processingInstruction_3942_0, &_call_cbs_processingInstruction_3942_0, &_set_callback_cbs_processingInstruction_3942_0);
  methods += new qt_gsi::GenericMethod ("setDocumentLocator", "@hide", false, &_init_cbs_setDocumentLocator_1732_0, &_call_cbs_setDocumentLocator_1732_0);
  methods += new qt_gsi::GenericMethod ("setDocumentLocator", "@brief Virtual method void QXmlContentHandler::setDocumentLocator(QXmlLocator *locator)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setDocumentLocator_1732_0, &_call_cbs_setDocumentLocator_1732_0, &_set_callback_cbs_setDocumentLocator_1732_0);
  methods += new qt_gsi::GenericMethod ("skippedEntity", "@hide", false, &_init_cbs_skippedEntity_2025_0, &_call_cbs_skippedEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("skippedEntity", "@brief Virtual method bool QXmlContentHandler::skippedEntity(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_skippedEntity_2025_0, &_call_cbs_skippedEntity_2025_0, &_set_callback_cbs_skippedEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@hide", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Virtual method bool QXmlContentHandler::startDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0, &_set_callback_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@hide", false, &_init_cbs_startElement_8513_0, &_call_cbs_startElement_8513_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Virtual method bool QXmlContentHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startElement_8513_0, &_call_cbs_startElement_8513_0, &_set_callback_cbs_startElement_8513_0);
  methods += new qt_gsi::GenericMethod ("startPrefixMapping", "@hide", false, &_init_cbs_startPrefixMapping_3942_0, &_call_cbs_startPrefixMapping_3942_0);
  methods += new qt_gsi::GenericMethod ("startPrefixMapping", "@brief Virtual method bool QXmlContentHandler::startPrefixMapping(const QString &prefix, const QString &uri)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startPrefixMapping_3942_0, &_call_cbs_startPrefixMapping_3942_0, &_set_callback_cbs_startPrefixMapping_3942_0);
  return methods;
}

gsi::Class<QXmlContentHandler_Adaptor> decl_QXmlContentHandler_Adaptor (qtdecl_QXmlContentHandler (), "QtXml", "QXmlContentHandler",
  methods_QXmlContentHandler_Adaptor (),
  "@qt\n@brief Binding of QXmlContentHandler");

}

