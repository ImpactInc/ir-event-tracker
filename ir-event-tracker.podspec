# coding: utf-8
Pod::Spec.new do |s|
  s.name         = "ir-event-tracker"
  s.version      = "1.5.0"
  s.summary      = "Impact Radius Event Tracker SDK"
  s.description  = <<-DESC 
                   An iOS SDK that helps our partners to track various events in their
                   mobile apps.
                   DESC
  s.homepage     = "http://developer.impactradius.com"
  s.license       = { :type => "Copyright", :text => "Copyright (c) 2017 Impact Radius. All rights reserved." }
  s.author    = "Impact Radius Inc."
  s.ios.deployment_target     = "6.0"
  s.source       = { :git => "https://github.com/ImpactInc/ir-event-tracker.git", :tag => "#{s.version}" }
  s.source_files = "EventTracker/*.h"
  s.public_header_files = "EventTracker/*.h"
  s.vendored_libraries = "EventTracker/libEventTracker.a"
end
