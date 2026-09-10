// Address: 0051cb48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051cb48(int *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0051cc23;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  param_1[0x19] = *(short *)((int)param_1 + 0x46) + -1;
  if (*(byte *)(param_1 + 5) < 4) {
    param_1[0x1a] = 9;
  }
  else {
    param_1[0x1a] = *(short *)((int)param_1 + 0x46) + -2;
  }
  sVar4 = FUN_0051c4c0(param_1,0xc);
  param_1[0x18] = (int)sVar4 - (int)*(short *)((int)param_1 + 0x4a);
  (**(code **)(*param_1 + 4))();
  iVar5 = 0;
  param_1[0x13] = param_1[10];
  param_1[0x1b] = -1;
  do {
    bVar1 = *(byte *)param_1[0x13];
    param_1[0x13] = param_1[0x13] + 1;
    if (param_1[4] <= (int)(short)(ushort)bVar1) {
      FUN_00406d44(&PTR_DAT_00516734,&local_8);
      FUN_00516934(local_8);
    }
    if ((0 < iVar5) && ((int)(short)(ushort)bVar1 != param_1[0x1b])) {
      FUN_0051cb0c(param_1,iVar5);
      iVar5 = 0;
    }
    if ((int)(short)(ushort)bVar1 == param_1[0x1b]) {
      iVar5 = iVar5 + 1;
    }
    else {
      param_1[0x1b] = (int)(short)(ushort)bVar1;
      iVar5 = 1;
    }
    cVar3 = FUN_0051c558(param_1);
  } while (cVar3 != '\0');
  FUN_0051cb0c(param_1,iVar5);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0051cc2a;
  puStack_1c = (undefined1 *)0x51cc22;
  FUN_004048d4(&local_8,uStack_20,puVar2);
  return;
}

