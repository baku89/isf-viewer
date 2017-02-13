//
//  ISF.h
//  ISFViewer
//
//  Created by 麦 on 2/12/17.
//
//

#import <VVISFKit/VVISFKit.h>
#import <Cocoa/Cocoa.h>


@interface ISFScene : NSObject {
@private
	ISFGLScene *_scene;
}
@property(readonly) ISFGLScene *scene;
@end
