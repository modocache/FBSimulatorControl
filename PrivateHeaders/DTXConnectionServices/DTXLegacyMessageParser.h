//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTXConnectionServices/DTXMessageParser.h>

@class NSMutableArray;

@interface DTXLegacyMessageParser : DTXMessageParser
{
    NSMutableArray *_savedKeyArrays;
}

+ (void)initialize;
- (id)parseMessageWithExceptionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithMessageHandler:(CDUnknownBlockType)arg1 andParseExceptionHandler:(CDUnknownBlockType)arg2;

@end

