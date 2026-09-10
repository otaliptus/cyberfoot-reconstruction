// Address: 005362b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005362b4(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x5362c4;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_14 = &LAB_005366af;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = 0;
  bVar3 = true;
  puStack_10 = &stack0xfffffffc;
  FUN_00404cf0(local_8,"clred");
  if (bVar3) {
    iVar2 = 0xff;
  }
  else {
    FUN_00404cf0(local_8,"clblack");
    if (bVar3) {
      iVar2 = 0;
    }
    else {
      FUN_00404cf0(local_8,"clblue");
      if (bVar3) {
        iVar2 = 0xff0000;
      }
      else {
        FUN_00404cf0(local_8,"clgreen");
        if (bVar3) {
          iVar2 = 0x8000;
        }
        else {
          FUN_00404cf0(local_8,"claqua");
          if (bVar3) {
            iVar2 = 0xffff00;
          }
          else {
            FUN_00404cf0(local_8,"clyellow");
            if (bVar3) {
              iVar2 = 0xffff;
            }
            else {
              FUN_00404cf0(local_8,"clfuchsia");
              if (bVar3) {
                iVar2 = 0xff00ff;
              }
              else {
                FUN_00404cf0(local_8,"clwhite");
                if (bVar3) {
                  iVar2 = 0xffffff;
                }
                else {
                  FUN_00404cf0(local_8,"cllime");
                  if (bVar3) {
                    iVar2 = 0xff00;
                  }
                  else {
                    FUN_00404cf0(local_8,"clsilver");
                    if (bVar3) {
                      iVar2 = 0xc0c0c0;
                    }
                    else {
                      FUN_00404cf0(local_8,"clgray");
                      if (bVar3) {
                        iVar2 = 0x808080;
                      }
                      else {
                        FUN_00404cf0(local_8,"clolive");
                        if (bVar3) {
                          iVar2 = 0x8080;
                        }
                        else {
                          FUN_00404cf0(local_8,"clnavy");
                          if (bVar3) {
                            iVar2 = 0x800000;
                          }
                          else {
                            FUN_00404cf0(local_8,"clpurple");
                            if (bVar3) {
                              iVar2 = 0x800080;
                            }
                            else {
                              FUN_00404cf0(local_8,"clteal");
                              if (bVar3) {
                                iVar2 = 0x808000;
                              }
                              else {
                                FUN_00404cf0(local_8,"clmaroon");
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
  if ((((((bVar3) && (FUN_00404cf0(local_8,"clbackground"), !bVar3)) &&
        (FUN_00404cf0(local_8,"clactivecaption"), !bVar3)) &&
       (((FUN_00404cf0(local_8,"clinactivecaption"), !bVar3 &&
         (FUN_00404cf0(local_8,"clmenu"), !bVar3)) &&
        ((FUN_00404cf0(local_8,"clwindow"), !bVar3 &&
         ((FUN_00404cf0(local_8,"clwindowframe"), !bVar3 &&
          (FUN_00404cf0(local_8,"clmenutext"), !bVar3)))))))) &&
      (((FUN_00404cf0(local_8,"clwindowtext"), !bVar3 &&
        ((((((FUN_00404cf0(local_8,"clcaptiontext"), !bVar3 &&
             (FUN_00404cf0(local_8,"clactiveborder"), !bVar3)) &&
            (FUN_00404cf0(local_8,"clinactiveborder"), !bVar3)) &&
           ((FUN_00404cf0(local_8,"clappworkspace"), !bVar3 &&
            (FUN_00404cf0(local_8,"clhighlight"), !bVar3)))) &&
          ((FUN_00404cf0(local_8,"clhighlighttext"), !bVar3 &&
           ((FUN_00404cf0(local_8,"clbtnface"), !bVar3 &&
            (FUN_00404cf0(local_8,"clbtnshadow"), !bVar3)))))) &&
         (FUN_00404cf0(local_8,"clgraytext"), !bVar3)))) &&
       (((FUN_00404cf0(local_8,"clbtntext"), !bVar3 &&
         (FUN_00404cf0(local_8,"clinactivecaptiontext"), !bVar3)) &&
        (FUN_00404cf0(local_8,"clbtnhighlight"), !bVar3)))))) &&
     (((FUN_00404cf0(local_8,"cl3ddkshadow"), !bVar3 && (FUN_00404cf0(local_8,"cl3dlight"), !bVar3))
      && (FUN_00404cf0(local_8,"clinfotext"), !bVar3)))) {
    FUN_00404cf0(local_8,"clinfobk");
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005366b6;
  puStack_14 = (undefined1 *)0x5366ae;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

