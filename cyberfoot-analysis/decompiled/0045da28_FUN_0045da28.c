// Address: 0045da28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045da28(int *param_1,int param_2)

{
  undefined1 *puVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045db84;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
    puStack_18 = &stack0xfffffffc;
    uVar3 = (**(code **)(*param_1 + 0xcc))();
    (**(code **)(*(int *)param_1[0x8f] + 0xc))((int *)param_1[0x8f],uVar3,&local_8);
    FUN_00466238(param_1,local_8);
    FUN_00403c80(param_1);
    FUN_00403c80(param_1);
    puVar1 = puStack_18;
    break;
  case 2:
    puStack_18 = &stack0xfffffffc;
    FUN_00403c80(param_1);
    puVar1 = puStack_18;
    break;
  case 3:
    *(undefined1 *)((int)param_1 + 0x25e) = 1;
    *(undefined1 *)((int)param_1 + 0x25d) = 1;
    puStack_18 = &stack0xfffffffc;
    FUN_0046b184(param_1);
    puVar1 = puStack_18;
    break;
  case 4:
    *(undefined1 *)((int)param_1 + 0x25e) = 0;
    *(undefined1 *)((int)param_1 + 0x25d) = 1;
    puStack_18 = &stack0xfffffffc;
    FUN_0046b270(param_1);
    puVar1 = puStack_18;
    break;
  case 5:
    puStack_18 = &stack0xfffffffc;
    FUN_00403c80(param_1);
    puVar1 = puStack_18;
    break;
  case 7:
    *(undefined1 *)((int)param_1 + 0x25d) = 0;
    puStack_18 = &stack0xfffffffc;
    FUN_00403c80(param_1);
    (**(code **)(*param_1 + 0xf0))();
    puVar1 = puStack_18;
    if (*(char *)((int)param_1 + 0x25d) != '\0') {
      LVar6 = 0;
      WVar5 = 0;
      UVar4 = 0x1f;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      PostMessageA(pHVar2,UVar4,WVar5,LVar6);
      puVar1 = puStack_18;
      if (*(char *)((int)param_1 + 0x25e) == '\0') {
        LVar6 = 0;
        WVar5 = 0;
        UVar4 = 0x14f;
        pHVar2 = (HWND)FUN_0046cae0(param_1);
        PostMessageA(pHVar2,UVar4,WVar5,LVar6);
        puVar1 = puStack_18;
      }
    }
    break;
  case 8:
    FUN_00403c80(param_1);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045db8b;
  puStack_1c = (undefined1 *)0x45db83;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

