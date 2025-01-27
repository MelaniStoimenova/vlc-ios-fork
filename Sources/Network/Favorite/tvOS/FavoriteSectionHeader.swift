//
//  FavoriteSectionHeader.swift
//  VLC
//
//  Created by Eshan Singh on 02/01/24.
//  Copyright © 2024 VideoLAN. All rights reserved.
//

import Foundation

class FavoriteSectionHeader: UICollectionReusableView {
    static var identifier = "FavoriteSectionHeader"
    static var height: CGFloat = 100
    
    lazy var headerView: FavoriteHeaderContentView = {
        return FavoriteHeaderContentView()
    }()

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setupheaderView()
    }
    
    private func setupheaderView() {
       
      addSubview(headerView)
      headerView.translatesAutoresizingMaskIntoConstraints = false
     
      NSLayoutConstraint.activate([
        headerView.topAnchor.constraint(equalTo: topAnchor),
        headerView.leadingAnchor.constraint(equalTo: leadingAnchor),
        headerView.trailingAnchor.constraint(equalTo: trailingAnchor),
        headerView.bottomAnchor.constraint(equalTo: bottomAnchor)
      ])
    }
}
