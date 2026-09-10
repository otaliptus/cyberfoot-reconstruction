// Address: 0040dee0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040dee0(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  LCID LVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0040e0aa;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar7 = 1;
  FUN_004048d4(param_2);
  puVar8 = &local_c;
  LVar4 = GetThreadLocale();
  FUN_0040dba8(LVar4,0x1009,&DAT_0040e0c0,puVar8);
  iVar5 = FUN_0040a034(local_c,1);
  if (iVar5 - 3U < 3) {
    while (iVar5 = FUN_00404ba4(param_1), iVar7 <= iVar5) {
      uVar6 = (uint)*(byte *)(param_1 + -1 + iVar7);
      if ((*(byte *)((int)&DAT_00662134 + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0) {
        iVar5 = FUN_0040a8c8(param_1 + -1 + iVar7,&DAT_0040e0c4,2);
        if (iVar5 == 0) {
          FUN_00404bac(param_2,&DAT_0040e0d0);
          iVar7 = iVar7 + 1;
        }
        else {
          iVar5 = FUN_0040a8c8(param_1 + -1 + iVar7,&DAT_0040e0d4,4);
          if (iVar5 == 0) {
            FUN_00404bac(param_2,&DAT_0040e0e4);
            iVar7 = iVar7 + 3;
          }
          else {
            iVar5 = FUN_0040a8c8(param_1 + -1 + iVar7,&DAT_0040e0ec,2);
            if (iVar5 == 0) {
              FUN_00404bac(param_2,&DAT_0040e0f8);
              iVar7 = iVar7 + 1;
            }
            else {
              cVar1 = *(char *)(param_1 + -1 + iVar7);
              if ((cVar1 == 'Y') || (cVar1 == 'y')) {
                FUN_00404bac(param_2,&LAB_0040e104);
              }
              else {
                FUN_00404abc(&local_18,*(undefined1 *)(param_1 + -1 + iVar7));
                FUN_00404bac(param_2,local_18);
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
      }
      else {
        local_8 = FUN_0040efac(param_1,iVar7);
        FUN_00404e04(param_1,iVar7,local_8,&local_14);
        FUN_00404bac(param_2,local_14);
        iVar7 = iVar7 + local_8;
      }
    }
  }
  else {
    if ((DAT_0066c748 == 4) || (DAT_0066c748 - 0x11U < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (; iVar5 = FUN_00404ba4(param_1), iVar7 <= iVar5; iVar7 = iVar7 + 1) {
        cVar1 = *(char *)(param_1 + -1 + iVar7);
        if ((cVar1 != 'G') && (cVar1 != 'g')) {
          FUN_00404abc(&local_10,*(undefined1 *)(param_1 + -1 + iVar7));
          FUN_00404bac(param_2,local_10);
        }
      }
    }
    else {
      FUN_00404928(param_2,param_1);
    }
  }
  puVar3 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040e0b1;
  puStack_2c = (undefined1 *)0x40e0a9;
  FUN_004048f8(&local_18,4,puVar3);
  return;
}

