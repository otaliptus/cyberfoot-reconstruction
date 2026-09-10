// Address: 00473a10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473a10(int param_1)

{
  int *piVar1;
  HBITMAP pHVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_1c [16];
  HDC local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = GetDC((HWND)0x0);
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  piVar1 = *(int **)(local_8 + 0x50);
  pHVar2 = CreateCompatibleBitmap(local_c,*(int *)(local_8 + 0x34),*(int *)(local_8 + 0x30));
  FUN_00430eec(piVar1,pHVar2);
  iVar3 = FUN_00430280(piVar1);
  FUN_0042ab6c(*(undefined4 *)(iVar3 + 0x14),0);
  uVar4 = (**(code **)(*piVar1 + 0x20))();
  puVar6 = local_1c;
  uVar5 = (**(code **)(*piVar1 + 0x2c))();
  FUN_0041c990(0,0,uVar5,puVar6,uVar4);
  puVar6 = local_1c;
  uVar4 = FUN_00430280(piVar1);
  FUN_0042af8c(uVar4,puVar6);
  *in_FS_OFFSET = uVar7;
  ReleaseDC((HWND)0x0,local_c);
  return;
}

