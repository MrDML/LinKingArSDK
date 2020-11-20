#
# Be sure to run `pod lib lint LinKingArSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinKingArSDK'
  s.version          = '0.1.0'
  s.summary          = 'LinKingArSDK foreign version.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/MrDML/LinKingArSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'leon' => 'leon' }
  s.source           = { :git => 'https://github.com/MrDML/LinKingArSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.static_framework = true
    
    s.vendored_frameworks = "LinKingArSDK/Products/LinKingArSDK.framework"
    s.resources = "LinKingArSDK/Assets/*.*"
    s.dependency 'GoogleSignIn', '~> 5.0.2'
    s.dependency 'Firebase/Auth'
    s.dependency 'FBSDKLoginKit', '~> 6.3.0'
    s.dependency 'FBSDKShareKit', '~> 6.3.0'
    s.dependency 'AppsFlyerFramework', '~> 5.2.0'
    s.dependency 'SDWebImage', '>= 5.0.0'
    s.dependency 'Toast', '~> 4.0.0'
    s.dependency 'FBAudienceNetwork'
    s.dependency 'IronSourceSDK','7.0.0.0'
    s.dependency 'IronSourceAdMobAdapter','4.3.14.2'
    s.dependency 'IronSourcePangleAdapter','4.1.5.3'
    s.dependency 'IronSourceUnityAdsAdapter','4.3.4.1'
    s.xcconfig = {
        'VALID_ARCHS' =>  'arm64 x86_64 armv7',
    }
    
    
end