/*
 * Copyright 2014 Google Inc.
 * Copyright 2015 Xamarin Inc.
 * Copyright 2017 Microsoft Corporation. All rights reserved.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef sk_svg_DEFINED
#define sk_svg_DEFINED

#include "sk_types.h"

SK_C_PLUS_PLUS_BEGIN_GUARD

SK_C_API sk_canvas_t* sk_svgcanvas_create(const sk_rect_t* bounds, sk_xmlwriter_t* writer);

#ifdef ESY_SKIA_SVG
// esy-skia additions
SK_C_API void sk_svgdom_render(sk_svgdom_t *svgdom, sk_canvas_t *canvas);
SK_C_API void sk_svgdom_set_container_size(sk_svgdom_t *svgdom, float width, float height);
SK_C_API float sk_svgdom_get_container_width(sk_svgdom_t *svgdom);
SK_C_API float sk_svgdom_get_container_height(sk_svgdom_t *svgdom);
SK_C_API sk_svgdom_t *sk_svgdom_create_from_stream(sk_stream_t *stream);
SK_C_API void sk_svgdom_ref(const sk_svgdom_t *svg);
SK_C_API void sk_svgdom_unref(const sk_svgdom_t *svg);
#endif

SK_C_PLUS_PLUS_END_GUARD

#endif
