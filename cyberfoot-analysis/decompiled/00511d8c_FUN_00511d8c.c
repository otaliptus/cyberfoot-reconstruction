// Address: 00511d8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511d8c(int *param_1)

{
  undefined1 *puVar1;
  HWND hWnd;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_24;
  int local_20;
  undefined1 local_1c [16];
  undefined4 local_c;
  char local_5;
  
  puStack_30 = &stack0xfffffffc;
  local_c = 0;
  puStack_34 = &LAB_00511f16;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_5 = '\x01';
  puVar1 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 0x139) & 8) != 0) && (puVar1 = &stack0xfffffffc, param_1[0xb5] != 0)) {
    (**(code **)(*(int *)param_1[0xb5] + 0xf8))((int *)param_1[0xb5],&local_c);
    FUN_00403c80(param_1,param_1[0xa0],param_1[0xa1],&local_5,&local_c);
    (**(code **)(*(int *)param_1[0xb5] + 0x120))((int *)param_1[0xb5],local_c);
    puVar1 = puStack_30;
  }
  puStack_30 = puVar1;
  if (local_5 != '\0') {
    if (param_1[0xb5] != 0) {
      iVar3 = 0;
      hWnd = (HWND)FUN_0046cae0(param_1[0xb5]);
      ShowWindow(hWnd,iVar3);
      if ((*(byte *)(param_1 + 0x139) & 8) != 0) {
        (**(code **)(*param_1 + 0x200))(param_1,param_1[0xa0],param_1[0xa1]);
      }
      if ((*(byte *)(param_1 + 0x139) & 0x40) != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0xb7]);
        (**(code **)(*param_1 + 0x204))(param_1,uVar2,5);
      }
      (**(code **)(*param_1 + 0x44))(param_1,local_1c);
      FUN_004e55c0(PTR_DAT_004e5160,param_1[0x82],local_1c);
    }
    if ((*(byte *)(param_1 + 0x139) & 8) != 0) {
      FUN_00403c80(param_1);
    }
    *(ushort *)(param_1 + 0x139) = ~DAT_00511f24 & *(ushort *)(param_1 + 0x139);
    FUN_004070b8(0xffffffff,0xffffffff,&local_24);
    param_1[0xa0] = local_24;
    param_1[0xa1] = local_20;
    if (param_1[0xb7] != -1) {
      iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0xb7]);
      *(undefined1 *)(iVar3 + 0x68) = 0;
      param_1[0xb7] = -1;
    }
    FUN_0050eb88(param_1,0);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00511f1d;
  puStack_34 = (undefined1 *)0x511f15;
  FUN_00404ff0(&local_c,uStack_38,puVar1);
  return;
}

