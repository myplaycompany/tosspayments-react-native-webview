#ifndef RNCTPWebViewModule_h
#define RNCTPWebViewModule_h

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCTPWebViewSpec/RNCTPWebViewSpec.h"
#endif /* RCT_NEW_ARCH_ENABLED */

#import <React/RCTBridgeModule.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNCTPWebViewModule : NSObject <
#ifdef RCT_NEW_ARCH_ENABLED
NativeRNCTPWebViewModuleSpec
#else
RCTBridgeModule
#endif /* RCT_NEW_ARCH_ENABLED */
>
@end

NS_ASSUME_NONNULL_END

#endif /* RNCTPWebViewModule_h */
