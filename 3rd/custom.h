// Copyright (c) [2025] [gaoming]
// All rights reserved.
//
// This code is licensed under the MIT License. See LICENSE file for details.
//

#ifndef CUSTOM_H  
#define CUSTOM_H  

#ifdef CUSTOM_H_EXPORTS  
#define MYLIBRARY_API __attribute__((visibility("default")))  
#else  
#define CUSTOM_H_API  
#endif  

CUSTOM_H_API void hello();  

#endif // CUSTOM_H_H  