/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouGroupsConfiguration : NSObject {
    NSString * _configuration;
    unsigned int  _coverArticlesPosition;
    unsigned int  _coverArticlesPrecedingGroupsCount;
    unsigned int  _editorialPosition;
    unsigned int  _editorialPrecedingGroupsCount;
    unsigned int  _topStoriesPosition;
    unsigned int  _topStoriesPrecedingGroupsCount;
    unsigned int  _trendingStoriesPosition;
    unsigned int  _trendingStoriesPrecedingGroupsCount;
    double  _weekendGreatStoriesYouMissedTimeRange;
}

@property (nonatomic, readonly) unsigned int coverArticlesPosition;
@property (nonatomic, readonly) unsigned int coverArticlesPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned int editorialPosition;
@property (nonatomic, readonly) unsigned int editorialPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned int topStoriesPosition;
@property (nonatomic, readonly) unsigned int topStoriesPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned int trendingStoriesPosition;
@property (nonatomic, readonly) unsigned int trendingStoriesPrecedingGroupsCount;
@property (nonatomic, readonly) double weekendGreatStoriesYouMissedTimeRange;

- (void).cxx_destruct;
- (unsigned int)coverArticlesPosition;
- (unsigned int)coverArticlesPrecedingGroupsCount;
- (unsigned int)editorialPosition;
- (unsigned int)editorialPrecedingGroupsCount;
- (unsigned int)hash;
- (id)initWithJSONConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)topStoriesPosition;
- (unsigned int)topStoriesPrecedingGroupsCount;
- (unsigned int)trendingStoriesPosition;
- (unsigned int)trendingStoriesPrecedingGroupsCount;
- (double)weekendGreatStoriesYouMissedTimeRange;

@end