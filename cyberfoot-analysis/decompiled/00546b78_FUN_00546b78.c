// Address: 00546b78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00546b78(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x546b88;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_14 = &LAB_00546f73;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = 0;
  bVar3 = true;
  puStack_10 = &stack0xfffffffc;
  FUN_00405378(local_8,L"clred");
  if (bVar3) {
    iVar2 = 0xff;
  }
  else {
    FUN_00405378(local_8,L"clblack");
    if (bVar3) {
      iVar2 = 0;
    }
    else {
      FUN_00405378(local_8,L"clblue");
      if (bVar3) {
        iVar2 = 0xff0000;
      }
      else {
        FUN_00405378(local_8,L"clgreen");
        if (bVar3) {
          iVar2 = 0x8000;
        }
        else {
          FUN_00405378(local_8,L"claqua");
          if (bVar3) {
            iVar2 = 0xffff00;
          }
          else {
            FUN_00405378(local_8,L"clyellow");
            if (bVar3) {
              iVar2 = 0xffff;
            }
            else {
              FUN_00405378(local_8,L"clfuchsia");
              if (bVar3) {
                iVar2 = 0xff00ff;
              }
              else {
                FUN_00405378(local_8,L"clwhite");
                if (bVar3) {
                  iVar2 = 0xffffff;
                }
                else {
                  FUN_00405378(local_8,L"cllime");
                  if (bVar3) {
                    iVar2 = 0xff00;
                  }
                  else {
                    FUN_00405378(local_8,L"clsilver");
                    if (bVar3) {
                      iVar2 = 0xc0c0c0;
                    }
                    else {
                      FUN_00405378(local_8,L"clgray");
                      if (bVar3) {
                        iVar2 = 0x808080;
                      }
                      else {
                        FUN_00405378(local_8,L"clolive");
                        if (bVar3) {
                          iVar2 = 0x8080;
                        }
                        else {
                          FUN_00405378(local_8,L"clnavy");
                          if (bVar3) {
                            iVar2 = 0x800000;
                          }
                          else {
                            FUN_00405378(local_8,L"clpurple");
                            if (bVar3) {
                              iVar2 = 0x800080;
                            }
                            else {
                              FUN_00405378(local_8,L"clteal");
                              if (bVar3) {
                                iVar2 = 0x808000;
                              }
                              else {
                                FUN_00405378(local_8,L"clmaroon");
                                if (bVar3) {
                                  iVar2 = 0x80;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = iVar2 == 0;
  if ((((((bVar3) && (FUN_00405378(local_8,L"clbackground"), !bVar3)) &&
        (FUN_00405378(local_8,L"clactivecaption"), !bVar3)) &&
       (((FUN_00405378(local_8,L"clinactivecaption"), !bVar3 &&
         (FUN_00405378(local_8,L"clmenu"), !bVar3)) &&
        ((FUN_00405378(local_8,L"clwindow"), !bVar3 &&
         ((FUN_00405378(local_8,L"clwindowframe"), !bVar3 &&
          (FUN_00405378(local_8,L"clmenutext"), !bVar3)))))))) &&
      (((FUN_00405378(local_8,L"clwindowtext"), !bVar3 &&
        ((((((FUN_00405378(local_8,L"clcaptiontext"), !bVar3 &&
             (FUN_00405378(local_8,L"clactiveborder"), !bVar3)) &&
            (FUN_00405378(local_8,L"clinactiveborder"), !bVar3)) &&
           ((FUN_00405378(local_8,L"clappworkspace"), !bVar3 &&
            (FUN_00405378(local_8,L"clhighlight"), !bVar3)))) &&
          ((FUN_00405378(local_8,L"clhighlighttext"), !bVar3 &&
           ((FUN_00405378(local_8,L"clbtnface"), !bVar3 &&
            (FUN_00405378(local_8,L"clbtnshadow"), !bVar3)))))) &&
         (FUN_00405378(local_8,L"clgraytext"), !bVar3)))) &&
       (((FUN_00405378(local_8,L"clbtntext"), !bVar3 &&
         (FUN_00405378(local_8,L"clinactivecaptiontext"), !bVar3)) &&
        (FUN_00405378(local_8,L"clbtnhighlight"), !bVar3)))))) &&
     (((FUN_00405378(local_8,L"cl3ddkshadow"), !bVar3 &&
       (FUN_00405378(local_8,L"cl3dlight"), !bVar3)) &&
      (FUN_00405378(local_8,L"clinfotext"), !bVar3)))) {
    FUN_00405378(local_8,L"clinfobk");
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00546f7a;
  puStack_14 = (undefined1 *)0x546f72;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

