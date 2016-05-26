//
//  CVMPicture+CoreDataProperties.h
//  Curriculum Vitae Manager
//
//  Created by terrex on 25/05/16.
//  Copyright © 2016 Guillermo Gutierrez-Herrera. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "CVMPicture.h"

NS_ASSUME_NONNULL_BEGIN

@interface CVMPicture (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) CVMCurriculumVitae *curriculumVitae;

@end

NS_ASSUME_NONNULL_END
