//
//  ISFScene.m
//  ISFViewer
//
//  Created by 麦 on 2/13/17.
//
//

#import "ISFScene.h"

@implementation ISFScene

- (id)init
{
	self = [super init];
	
	if (self)
	{
		scene = [ISFGLScene alloc] init
	}
	return self;
}

@end
