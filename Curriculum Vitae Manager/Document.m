//
//  Document.m
//  Curriculum Vitae Manager
//
//  Created by terrex on 24/04/16.
//  Copyright © 2016 Guillermo Gutierrez-Herrera. All rights reserved.
//

#import "Document.h"

@interface Document ()

@end

@implementation Document

- (instancetype)init {
    self = [super init];
    if (self) {
        // Add your subclass-specific initialization here.
    }
    return self;
}

- (instancetype)initWithType:(NSString *)typeName error:(NSError * _Nullable __autoreleasing *)outError {
    self = [self init];
    [NSEntityDescription insertNewObjectForEntityForName:@"CurriculumVitae" inManagedObjectContext:self.managedObjectContext];
    return self;
}

- (CVMCurriculumVitae *) curriculumVitae {
    NSArray *objects = [self.managedObjectContext executeFetchRequest:[NSFetchRequest fetchRequestWithEntityName:@"CurriculumVitae"] error:nil];
    CVMCurriculumVitae *result = [objects firstObject];
    if (result == nil) {
        result = [NSEntityDescription insertNewObjectForEntityForName:@"CurriculumVitae" inManagedObjectContext:self.managedObjectContext];
    }
    return result;
}

+ (BOOL)autosavesInPlace {
    return YES;
}


- (NSString *)windowNibName {
    // Override returning the nib file name of the document
    // If you need to use a subclass of NSWindowController or if your document supports multiple NSWindowControllers, you should remove this method and override -makeWindowControllers instead.
    return @"Document";
}

@end
