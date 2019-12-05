//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class ALMediationDebuggerDataSourceObserver, ALMediationDebuggerTableViewDataSource;

@interface ALMediationDebuggerViewController : UITableViewController
{
    ALMediationDebuggerTableViewDataSource *_dataSource;
    ALMediationDebuggerDataSourceObserver *_dataSourceObserver;
}

@property(retain, nonatomic) ALMediationDebuggerDataSourceObserver *dataSourceObserver; // @synthesize dataSourceObserver=_dataSourceObserver;
@property(retain, nonatomic) ALMediationDebuggerTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dataSourceDidUpdateData;
- (void)didTapDone:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;

@end
