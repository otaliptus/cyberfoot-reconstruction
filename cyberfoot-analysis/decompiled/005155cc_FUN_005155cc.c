// Address: 005155cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005155cc(int *param_1,undefined4 param_2,byte param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  HWND hWnd;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  LPARAM lParam;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  byte local_5;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_005157a6;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_5 = param_3;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))();
  FUN_0050ebdc(param_1,1);
  if (((*(byte *)(param_1 + 0x139) & 8) != 0) || ((*(byte *)(param_1 + 0x139) & 0x40) != 0)) {
    (**(code **)(*param_1 + 0x1c0))();
    (**(code **)(*param_1 + 0x1e8))();
  }
  if ((piVar3[0x14] != 0) || (piVar3[0x19] != 0)) {
    uVar4 = (**(code **)(*piVar3 + 0x3c))();
    if (((uVar4 & 2) != 0) && ((char)param_1[0x126] == '\0')) {
      *(ushort *)(param_1 + 0x139) = *(ushort *)(param_1 + 0x139) | 0x40;
      if (piVar3[0x19] == 0) {
        FUN_0050eb88(param_1,piVar3[0x14]);
        (**(code **)(*param_1 + 0x19c))();
        local_c = (int *)param_1[0xb5];
        (**(code **)(*piVar3 + 0x6c))();
        FUN_004ef4cc(local_c,0);
        FUN_004663a8(local_c,piVar3[0xd]);
        *(undefined1 *)(local_c + 0x84) = 0;
        FUN_0042a3a0(local_c[0x1a],*(undefined4 *)(piVar3[0x16] + 0x18));
        (**(code **)(*local_c + 300))();
      }
      else {
        FUN_0050eb88(param_1,piVar3[0x19]);
        if ((*(byte *)((int)param_1 + 0x492) & 1) == 0) {
          (**(code **)(*param_1 + 0x19c))();
        }
      }
      iVar5 = FUN_0050a2cc(piVar3);
      param_1[0xb7] = iVar5;
      *(undefined1 *)(piVar3 + 0x1a) = 1;
      *(undefined1 *)(param_1 + 0xb6) = 1;
      lParam = 0;
      uVar4 = (uint)local_5;
      Msg = 0x102;
      hWnd = (HWND)FUN_0046cae0(param_1[0xb5]);
      SendMessageA(hWnd,Msg,uVar4,lParam);
      *(undefined1 *)(param_1 + 0xb6) = 0;
      FUN_004070b8(0xffffffff,0xffffffff,&local_14);
      param_1[0xa0] = local_14;
      param_1[0xa1] = local_10;
      FUN_005116b0(param_1);
      if ((*(byte *)(piVar3 + 0x1f) & 0x80) == 0) {
        piVar1 = (int *)param_1[0xb5];
        FUN_00466208(piVar1,&local_18);
        uVar6 = FUN_00404ba4(local_18);
        (**(code **)(*piVar1 + 0xdc))(piVar1,uVar6);
      }
      else {
        FUN_0045c148(param_1[0xb5]);
      }
      uVar6 = FUN_0050a2cc(piVar3);
      FUN_00403c80(param_1,uVar6);
    }
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005157ad;
  puStack_2c = (undefined1 *)0x5157a5;
  FUN_004048d4(&local_18,uStack_30,puVar2);
  return;
}

