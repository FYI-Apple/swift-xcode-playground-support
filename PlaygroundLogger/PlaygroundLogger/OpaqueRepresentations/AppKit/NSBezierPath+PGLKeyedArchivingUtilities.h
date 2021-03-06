//===--- NSBezierPath+PGLKeyedArchivingUtilities.h ------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2018 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#import <TargetConditionals.h>

#if TARGET_OS_OSX

#import <AppKit/AppKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBezierPath (PGLKeyedArchivingUtilities)

- (BOOL)pgl_encodeForLogEntryUsingEncoder:(NSCoder *)coder error:(NSError **)outError NS_SWIFT_NAME(encodeForLogEntry(using:));

@end

NS_ASSUME_NONNULL_END

#endif
