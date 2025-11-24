class = "QOpenGLWidget"

baseClass = "QWidget"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "TargetBuffer",
        values = {
            "LeftBuffer",
            "RightBuffer",
        }
    },
    {
        enum   = "UpdateBehavior",
        values = {
            { "NoPartialUpdate", cmt = "QOpenGLWidget will discard the contents of the color buffer and the ancillary buffers after the QOpenGLWidget is rendered to screen. This is the same behavior that can be expected by calling QOpenGLContext::swapBuffers with a default opengl enabled QWindow as the argument. NoPartialUpdate can have some performance benefits on certain hardware architectures common in the mobile and embedded space when a framebuffer object is used as the rendering target. The framebuffer object is invalidated between frames with glInvalidateFramebuffer (if supported), or, as fallbacks, glDiscardFramebufferEXT (if supported) or a call to glClear." },
            { "PartialUpdate",   cmt = "The framebuffer objects color buffer and ancillary buffers are not invalidated between frames." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QOpenGLWidget*", {} },
            { "QOpenGLWidget*", { "QWidget*?" } },
            { "QOpenGLWidget*", { "QWidget*", "Qt::WindowFlags" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

