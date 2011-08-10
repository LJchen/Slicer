/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qMRMLColors_h
#define __qMRMLColors_h

/// Qt includes
#include <QColor>

/// qMRMLWidget includes
#include "qMRMLWidgetsExport.h"

class QMRML_WIDGETS_EXPORT qMRMLColors
{
public:

  static QColor sliceRed();
  static QColor sliceYellow();
  static QColor sliceGreen();
  static QColor sliceOrange();

  static QColor viewBlue();
};

#endif