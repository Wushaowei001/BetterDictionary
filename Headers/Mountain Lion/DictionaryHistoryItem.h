/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface DictionaryHistoryItem : NSObject
{
    NSMutableDictionary *_contents;
    NSString *_linkSourceID;
}

+ (id)historyItem;
@property(copy, nonatomic) NSString *linkSourceID; // @synthesize linkSourceID=_linkSourceID;
- (id)_contentDictionary;
- (id)description;
- (void)removeObjectForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (double)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setFloat:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)replaceContentsWithItem:(id)arg1;
- (BOOL)isEmptyItem;
- (id)serializedData;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

