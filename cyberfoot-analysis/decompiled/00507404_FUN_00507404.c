// Address: 00507404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00507404(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  RECT *pRVar7;
  BOOL BVar8;
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_38 [4];
  undefined4 local_34;
  RECT local_28;
  RECT local_18;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00465c50(param_1);
  if (iVar1 != local_8[0x154]) {
    if ((char)local_8[0xaf] == '\0') {
      if ((*(byte *)(local_8 + 0x124) & 0x10) != 0) {
        FUN_005111dc(local_8,2);
        if ((*(byte *)(local_8 + 0x124) & 0x80) != 0) {
          uVar2 = FUN_00465c50(local_8);
          pRVar7 = &local_28;
          FUN_0050f33c(local_8,local_38);
          FUN_0040709c(0,local_34,0xc,pRVar7,uVar2);
          BVar8 = 0;
          pRVar7 = &local_28;
          pHVar3 = (HWND)FUN_0046cae0(local_8);
          InvalidateRect(pHVar3,pRVar7,BVar8);
        }
        FUN_0050f33c(local_8,local_38);
        pRVar7 = &local_18;
        FUN_0050f33c(local_8,local_48);
        iVar1 = local_44 - (local_8[0x13] - local_8[0x154]);
        uVar2 = FUN_00465c0c(local_8);
        FUN_0040709c(0,iVar1,uVar2,pRVar7,local_34);
        BVar8 = 0;
        pRVar7 = &local_18;
        pHVar3 = (HWND)FUN_0046cae0(local_8);
        InvalidateRect(pHVar3,pRVar7,BVar8);
      }
    }
    else {
      uVar2 = FUN_00465c50(local_8);
      pRVar7 = &local_18;
      iVar1 = FUN_00465c50(local_8);
      iVar1 = iVar1 - (local_8[0x13] - local_8[0x154]);
      uVar5 = FUN_00465c0c(local_8);
      FUN_0040709c(0,iVar1,uVar5,pRVar7,uVar2);
      BVar8 = 0;
      pRVar7 = &local_18;
      pHVar3 = (HWND)FUN_0046cae0(local_8);
      InvalidateRect(pHVar3,pRVar7,BVar8);
    }
    if (local_8[0x154] < local_8[0x13]) {
      FUN_00507364();
      *(undefined1 *)(local_8 + 0x141) = 1;
    }
    else {
      *(undefined1 *)(local_8 + 0x141) = 0;
    }
    iVar1 = FUN_00465c50(local_8);
    local_8[0x154] = iVar1;
    (**(code **)(*local_8 + 0x1bc))();
  }
  iVar1 = FUN_00465c0c(local_8);
  if (iVar1 != local_8[0x156]) {
    if (*(int *)(local_8[0x8e] + 0x2c) < 1) {
      uVar2 = FUN_00465c50(local_8);
      pRVar7 = &local_18;
      iVar1 = FUN_00465c0c(local_8);
      iVar1 = iVar1 - local_8[0x156];
      iVar4 = FUN_00465c0c(local_8);
      iVar4 = iVar4 - iVar1;
      uVar5 = FUN_00465c0c(local_8);
      FUN_0040709c(iVar4,0,uVar5,pRVar7,uVar2);
    }
    else {
      (**(code **)(*local_8 + 0x44))(local_8,&local_18);
    }
    if ((char)local_8[0xaf] == '\x01') {
      local_18.left = local_18.left + -3;
    }
    BVar8 = 0;
    pRVar7 = &local_18;
    pHVar3 = (HWND)FUN_0046cae0(local_8);
    InvalidateRect(pHVar3,pRVar7,BVar8);
    uVar2 = FUN_00465c0c(local_8);
    FUN_0050b738(local_8[0x135],local_8[0x156],uVar2);
    iVar1 = FUN_00465c0c(local_8);
    local_8[0x156] = iVar1;
    (**(code **)(*local_8 + 0x1b8))();
    FUN_0050b490(local_8[0x135],0,0);
    bVar6 = true;
    FUN_00405378(local_8[0x9d]);
    if (!bVar6) {
      iVar1 = (**(code **)(*local_8 + 0x144))();
      if (iVar1 == 0) {
        FUN_00510c64(local_8,local_38);
        FUN_00513ca4(local_8,local_38);
      }
    }
  }
  if ((*(byte *)(local_8 + 0x139) & 8) != 0) {
    (**(code **)(*local_8 + 0x1e8))();
  }
  FUN_0046afec(local_8,param_2);
  return;
}

