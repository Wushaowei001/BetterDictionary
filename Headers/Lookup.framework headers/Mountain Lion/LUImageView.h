/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImageView.h"

@interface LUImageView : NSImageView
{
    BOOL _mouseInside;
}

@property BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
- (void)mouseUp:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

