//
//  MIT License
//
//  Copyright (c) 2012 TapHarmonic, LLC http://tapharmonic.com/
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Written by Bob McCune http://bobmccune.com for 360iDev 2012.
//

// Category adding common convenience methods to UIView.

@interface UIView (THKitAdditions)

@property(nonatomic, assign) CGFloat frameX;
@property(nonatomic, assign) CGFloat frameY;
@property(nonatomic, assign) CGFloat frameWidth;
@property(nonatomic, assign) CGFloat frameHeight;
@property(nonatomic, assign) CGFloat boundsX;
@property(nonatomic, assign) CGFloat boundsY;
@property(nonatomic, assign) CGFloat boundsWidth;
@property(nonatomic, assign) CGFloat boundsHeight;
@property(nonatomic, assign) CGFloat centerX;
@property(nonatomic, assign) CGFloat centerY;

/**
 * Returns the UIImage representation of this view.
 */
- (UIImage *)toImage;

/**
 * Returns a UIImageView representation of this view.  The image view's initial frame
 * is set to the frame as the view.
 */
- (UIImageView *)toImageView;

/**
 * Rounds corners of view with a radius of 8.0f.  This is a standard value throughout our app.
 */
- (void)roundCorners;

@end
