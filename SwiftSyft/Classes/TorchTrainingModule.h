//
//  TorchTrainingModule.h
//  Pods
//
//  Created by Mark Jeremiah Jimenez on 31/03/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TorchTrainingModule : NSObject

- (instancetype)initWithFileAtPath:(NSString*)filePath
NS_SWIFT_NAME(init(fileAtPath:))NS_DESIGNATED_INITIALIZER;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (NSArray<NSArray<NSNumber *> *> *)executeWithTrainingArray:(void *)trainingDataArray
     trainingShapes:(NSArray<NSNumber *> *)trainingDataShapes
     trainingLabels:(void *)trainingLabelArrays
trainingLabelShapes:(NSArray<NSNumber *> *)trainingLabelShapes
        paramArrays:(NSArray<NSValue *> *)paramArrays
         withShapes:(NSArray<NSArray<NSNumber *> *> *)paramShapes
          batchSize:(void *)batchSize
       learningRate:(void *)learningRate;

- (NSArray<NSArray<NSNumber *> *> *)generateDiffFromOriginalParamArrays:(NSArray<NSValue *> *)originalParamArrays
                                                     updatedParamArrays:(NSArray<NSValue *> *)updatedParamArrays
                                                             withShapes:(NSArray<NSArray<NSNumber *> *> *)paramShapes;


@end

NS_ASSUME_NONNULL_END
