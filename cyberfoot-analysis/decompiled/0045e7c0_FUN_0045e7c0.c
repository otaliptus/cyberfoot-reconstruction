// Address: 0045e7c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e7c0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  LPARAM LVar3;
  HWND pHVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  UINT UVar7;
  WPARAM WVar8;
  undefined4 *puVar9;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  WPARAM local_c;
  undefined4 uStack_8;
  
  puStack_30 = &stack0xfffffffc;
  uStack_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_0045e975;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar2 = FUN_00404ba4(param_2);
  if (iVar2 == 0) {
    uStack_8 = uStack_8 & 0xffffff;
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff);
    FUN_00403c80(param_1);
  }
  else {
    LVar3 = FUN_00404da4(param_2);
    WVar8 = 0xffffffff;
    UVar7 = 0x14c;
    pHVar4 = (HWND)FUN_0046cae0(param_1);
    local_c = SendMessageA(pHVar4,UVar7,WVar8,LVar3);
    uStack_8 = CONCAT13(local_c != 0xffffffff,(undefined3)uStack_8);
    if (local_c != 0xffffffff) {
      WVar8 = (**(code **)(*param_1 + 0xcc))();
      uStack_10 = CONCAT13(WVar8 != local_c,(undefined3)uStack_10);
      if ((char)param_1[0xa4] != '\0') {
        iVar2 = (**(code **)(*(int *)param_1[0x8f] + 0x54))((int *)param_1[0x8f],param_2);
        if (iVar2 != -1) {
          LVar3 = 0;
          WVar8 = 0;
          UVar7 = 0x14f;
          pHVar4 = (HWND)FUN_0046cae0(param_1);
          SendMessageA(pHVar4,UVar7,WVar8,LVar3);
        }
      }
      LVar3 = 0;
      UVar7 = 0x14e;
      WVar8 = local_c;
      pHVar4 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar4,UVar7,WVar8,LVar3);
      if (*(byte *)((int)param_1 + 0x276) < 2) {
        puVar9 = &local_18;
        (**(code **)(*(int *)param_1[0x8f] + 0xc))((int *)param_1[0x8f],local_c,&local_1c,puVar9);
        uVar5 = local_1c;
        iVar2 = FUN_00404ba4(param_2);
        FUN_00404e04(uVar5,iVar2 + 1,0x7fffffff,puVar9);
        FUN_00404bf0(&local_14,param_2,local_18);
        FUN_00466238(param_1,local_14);
        FUN_00466208(param_1,&local_20);
        uVar5 = FUN_00404ba4(local_20);
        uVar6 = FUN_00404ba4(param_2);
        LVar3 = FUN_00408100(uVar6,uVar5);
        WVar8 = 0;
        UVar7 = 0x142;
        pHVar4 = (HWND)FUN_0046cae0(param_1);
        SendMessageA(pHVar4,UVar7,WVar8,LVar3);
      }
      else {
        (**(code **)(*param_1 + 0xd0))(param_1,local_c);
        FUN_00404928(param_1 + 0x9c,param_2);
      }
      if (uStack_10._3_1_ != '\0') {
        FUN_00403c80(param_1);
        FUN_00403c80(param_1);
      }
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0045e97c;
  puStack_34 = (undefined1 *)0x45e967;
  FUN_004048d4(&local_20,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x45e974;
  FUN_004048f8(&local_1c,3);
  return;
}

