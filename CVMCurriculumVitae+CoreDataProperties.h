//
//  CVMCurriculumVitae+CoreDataProperties.h
//  Curriculum Vitae Manager
//
//  Created by terrex on 25/05/16.
//  Copyright © 2016 Guillermo Gutierrez-Herrera. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "CVMCurriculumVitae.h"

NS_ASSUME_NONNULL_BEGIN

@interface CVMCurriculumVitae (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *birthdate;
@property (nullable, nonatomic, retain) NSString *familyName;
@property (nullable, nonatomic, retain) NSString *firstName;
@property (nullable, nonatomic, retain) NSString *secondName;
@property (nullable, nonatomic, retain) CVMPicture *picture;

@end

NS_ASSUME_NONNULL_END
