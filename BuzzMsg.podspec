#
# Be sure to run `pod lib lint BuzzMsg.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BuzzMsg'
  s.version          = '1.8.2'
  s.summary          = 'A short description of BuzzMsg.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  create desc BuzzMsg Test.
                       DESC

  s.homepage         = 'https://github.com/buzzmsg/ImSdk-Ios'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'buzzmsg' => 'admin@buzzmsg.com' }
  s.source           = { :git => 'https://github.com/buzzmsg/ImSdk-Ios.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  s.requires_arc = true
  s.swift_version = '5.0'
  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES' }
  s.static_framework = true
  s.vendored_frameworks = ['BuzzMsg/IMSDK.framework', 'BuzzMsg/CommonModule.framework']

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.resources = 'BuzzMsg/Class/Resources/*'
  # s.resource_bundles = {
  #   'BuzzMsgBundle' => ['BuzzMsg/Resources/*']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'

  # s.dependency "WCDB.swift", '~> 1.0.8.2'
  s.dependency "BuzzWCDB", '1.1.1'
  s.dependency "Alamofire", '~> 4.9.1'
  s.dependency "HandyJSON", '~> 5.0.2'
  s.dependency "RxSwiftExt", '~> 6.0.1'
  s.dependency "MMKV", '~> 1.2.10'
  s.dependency "SnapKit", '~> 4.2.0'
  s.dependency "AliyunOSSiOS", '~> 2.10.15'
  s.dependency "AWSS3", '~> 2.25.0'
  s.dependency "Masonry", '~> 1.1.0'
  s.dependency "CocoaLumberjack/Swift", '~> 3.7.2'
  s.dependency "Localize-Swift", '~> 3.2.0'
  s.dependency "RxGesture", '~> 4.0.2'
  s.dependency "Texture", '~> 3.0.0'
  s.dependency "NSObject+Rx", '~> 5.2.2'
  s.dependency "R.swift", '= 6.1.0'
  s.dependency "MJRefresh", '~> 3.7.5'
  s.dependency "QMUIKit", '~> 4.5.1'
  s.dependency "YYText", '~> 1.0.7'
  s.dependency "YYModel", '~> 1.0.4'
  s.dependency "SDWebImage", '~> 5.11.1'
  s.dependency "JXPagingView", '= 2.1.2'

end








