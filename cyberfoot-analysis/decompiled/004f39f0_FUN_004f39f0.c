// Address: 004f39f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f39f0(int *param_1,char param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int nCmdShow;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_004f3b10;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar2 = &stack0xfffffffc;
  if (param_2 != *(char *)((int)param_1 + 0x279)) {
    *(char *)((int)param_1 + 0x279) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1[0x9c] + 0x254) = 1;
      ReleaseCapture();
      *(undefined1 *)(param_1 + 0x8b) = 0;
      FUN_004ef67c(param_1[0x9b],0);
      nCmdShow = 0;
      hWnd = (HWND)FUN_0046cae0(param_1[0x9c]);
      ShowWindow(hWnd,nCmdShow);
      FUN_00403c80(param_1);
      puVar2 = puStack_24;
    }
    else {
      puStack_24 = &stack0xfffffffc;
      uVar3 = FUN_00465c50(param_1);
      FUN_0041c968(0xffffffff,uVar3,local_14);
      FUN_00465d20(param_1,local_14,&local_c);
      FUN_004662fc(param_1[0x9c],param_1[0x1a]);
      piVar1 = (int *)param_1[0x9c];
      FUN_004659c4(piVar1,param_1[0x12]);
      FUN_00466208(param_1,&local_18);
      FUN_00466238(param_1[0x9c],local_18);
      (**(code **)(*param_1 + 0x144))(param_1,&local_c);
      *(undefined1 *)(param_1 + 0x8b) = 1;
      (**(code **)(*piVar1 + 0xec))(piVar1,local_c,local_8);
      puVar2 = puStack_24;
      if (*(char *)((int)param_1 + 0x27a) == '\x01') {
        (**(code **)(*param_1 + 0x7c))();
        puVar2 = puStack_24;
      }
    }
  }
  puStack_24 = puVar2;
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f3b17;
  puStack_28 = (undefined1 *)0x4f3b0f;
  FUN_004048d4(&local_18,uStack_2c,puVar2);
  return;
}

