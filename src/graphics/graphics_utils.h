/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

#include "graphics_object_ptr.h"
#include <AIS_InteractiveContext.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Aspect_Grid.hxx>
#include <Aspect_Window.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
class Image_PixMap;

namespace Mayo {

struct GraphicsUtils {

    struct AspectGridColors {
        Quantity_Color base;
        Quantity_Color tenth;
    };

    static void V3dView_fitAll(const Handle_V3d_View& view);
    static bool V3dView_hasClipPlane(const Handle_V3d_View& view, const Handle_Graphic3d_ClipPlane& plane);
    static gp_Pnt V3dView_to3dPosition(const Handle_V3d_View& view, double x, double y);

    static bool V3dViewer_isGridActive(const Handle_V3d_Viewer& viewer);
    static Handle_Aspect_Grid V3dViewer_grid(const Handle_V3d_Viewer& viewer);
    static AspectGridColors V3dViewer_gridColors(const Handle_V3d_Viewer& viewer);
    static void V3dViewer_setGridColors(const Handle_V3d_Viewer& viewer, const AspectGridColors& colors);

    static void AisContext_eraseObject(
            const Handle_AIS_InteractiveContext& context,
            const Handle_AIS_InteractiveObject& object
    );
    static void AisContext_setObjectVisible(
            const Handle_AIS_InteractiveContext& context,
            const Handle_AIS_InteractiveObject& object,
            bool on
    );

    static AIS_InteractiveContext* AisObject_contextPtr(const GraphicsObjectPtr& object);
    static bool AisObject_isVisible(const GraphicsObjectPtr& object);
    static void AisObject_setVisible(const GraphicsObjectPtr& object, bool on);
    static Bnd_Box AisObject_boundingBox(const GraphicsObjectPtr& object);

    static int AspectWindow_width(const Handle_Aspect_Window& wnd);
    static int AspectWindow_height(const Handle_Aspect_Window& wnd);

    static void Gfx3dClipPlane_setCappingHatch(
            const Handle_Graphic3d_ClipPlane& plane, Aspect_HatchStyle hatch
    );
    static void Gfx3dClipPlane_setNormal(
            const Handle_Graphic3d_ClipPlane& plane, const gp_Dir& n
    );
    static void Gfx3dClipPlane_setPosition(
            const Handle_Graphic3d_ClipPlane& plane, double pos
    );

    static bool ImagePixmap_flipY(Image_PixMap& pixmap);
};

} // namespace Mayo
