/*
 * xmlj_dom.h
 * Copyright (C) 2004 The Free Software Foundation
 * 
 * This file is part of GNU JAXP, a library.
 * 
 * GNU JAXP is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * GNU JAXP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * As a special exception, if you link this library with other files to
 * produce an executable, this library does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * This exception does not however invalidate any other reasons why the
 * executable file might be covered by the GNU General Public License.
 */
#ifndef XMLJ_DOM_H
#define XMLJ_DOM_H

#include "gnu_xml_libxmlj_dom_GnomeAttr.h"
#include "gnu_xml_libxmlj_dom_GnomeDocument.h"
#include "gnu_xml_libxmlj_dom_GnomeDocumentBuilder.h"
#include "gnu_xml_libxmlj_dom_GnomeDocumentType.h"
#include "gnu_xml_libxmlj_dom_GnomeElement.h"
#include "gnu_xml_libxmlj_dom_GnomeEntity.h"
#include "gnu_xml_libxmlj_dom_GnomeNamedNodeMap.h"
#include "gnu_xml_libxmlj_dom_GnomeNode.h"
#include "gnu_xml_libxmlj_dom_GnomeNodeList.h"
#include "gnu_xml_libxmlj_dom_GnomeProcessingInstruction.h"
#include "gnu_xml_libxmlj_dom_MatchingNodeList.h"

#include <libxml/parser.h>

/* Callback functions */
xmlParserInputPtr xmljDOMResolveEntity (void *ctx, const xmlChar * publicId,
					const xmlChar * systemId);
void xmljDOMWarning (void *ctx, const char *msg, ...);
void xmljDOMError (void *ctx, const char *msg, ...);
void xmljDOMFatalError (void *ctx, const char *msg, ...);
void dispatchLogCallback (const char *msg, const char *methodName);

/* Utility */
jobject createDocument (JNIEnv * env, jobject self, xmlDocPtr doc);
xmlParserCtxtPtr getContext (JNIEnv * env, jobject self);
xmlAttrPtr getNamedItem (JNIEnv * env, jobject self, jstring name);
xmlAttrPtr getNamedItemNS (JNIEnv * env, jobject self, jstring uri,
			   jstring localName);

#endif /* !defined XMLJ_DOM_H */