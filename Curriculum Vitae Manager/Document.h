//
//  Document.h
//  Curriculum Vitae Manager
//
//  Created by terrex on 24/04/16.
//  Copyright © 2016 Guillermo Gutierrez-Herrera. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CVMCurriculumVitae+CoreDataProperties.h"

@interface Document : NSPersistentDocument

@property (readonly, nonatomic) IBOutlet CVMCurriculumVitae * curriculumVitae;

@end
