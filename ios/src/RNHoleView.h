//
//  RNHoleView.h
//  RNHoleViewProject
//
//  Created by Stepan Kopylov on 20/05/2020.
//  Copyright © 2020 Stepan Kopylov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RNHoleViewHole : NSObject

@property (nonatomic) CGRect rect;
@property (nonatomic) CGFloat borderRadius;
@property (nonatomic) CGFloat borderTopLeftRadius;
@property (nonatomic) CGFloat borderTopRightRadius;
@property (nonatomic) CGFloat borderBottomLeftRadius;
@property (nonatomic) CGFloat borderBottomRightRadius;

- (instancetype)initWitnX:(CGFloat)x y:(CGFloat)y
					width:(CGFloat)width
				   height:(CGFloat)height
		  andBorderRadius:(CGFloat)borderRadius
   andBorderTopLeftRadius:(CGFloat)borderTopLeftRadius
  andBorderTopRightRadius:(CGFloat)borderTopRightRadius
andBorderBottomLeftRadius:(CGFloat)borderBottomLeftRadius
andBorderBottomRightRadius:(CGFloat)borderBottomRightRadius;

@end

@interface RNHoleView : UIView

@property (nonatomic) NSArray <RNHoleViewHole*> *parsedHoles;

@property (nonatomic) NSArray <NSDictionary*> *holes;

@end
