#ifndef CC_GFXGLES2_GLES2_RENDER_PASS_H_
#define CC_GFXGLES2_GLES2_RENDER_PASS_H_

NS_CC_BEGIN

class GLES2GPURenderPass;

class CC_GLES2_API GLES2RenderPass : public GFXRenderPass {
 public:
  GLES2RenderPass(GFXDevice* device);
  ~GLES2RenderPass();
  
 public:
  bool initialize(const GFXRenderPassInfo& info);
  void destroy();
  
  CC_INLINE GLES2GPURenderPass* gpuRenderPass() const { return _gpuRenderPass; }
  
 private:
  GLES2GPURenderPass* _gpuRenderPass = nullptr;
};

NS_CC_END

#endif