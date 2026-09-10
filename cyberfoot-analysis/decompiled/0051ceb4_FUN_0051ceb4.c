// Address: 0051ceb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ceb4(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  if (iVar6 < 1) {
    puStack_1c = (undefined1 *)0x51cee1;
    bVar2 = FUN_005228f4(*(undefined4 *)(param_1 + 4));
    iVar6 = 1 << (bVar2 & 0x1f);
  }
  else {
    puStack_1c = (undefined1 *)0x51ced5;
    bVar2 = FUN_0051a874(*(int *)(param_1 + 0x20));
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x45) == '\x01') {
    puStack_1c = (undefined1 *)0x51cf01;
    local_c = FUN_00403a54(PTR_LAB_0051c79c,1);
  }
  else {
    puStack_1c = (undefined1 *)0x51cf12;
    local_c = FUN_00403a54(PTR_LAB_0051cc30,1);
  }
  puStack_20 = &LAB_0051cf86;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  piVar1 = *(int **)(param_1 + 4);
  *(int **)(local_c + 0xc) = piVar1;
  *(undefined4 *)(local_c + 8) = *(undefined4 *)(*piVar1 + 100);
  puStack_1c = &stack0xfffffffc;
  uVar3 = FUN_0051d4c8(param_1,3);
  uVar3 = uVar3 & 0xffff;
  uVar4 = FUN_0051d4c8(param_1,4);
  uVar4 = uVar4 & 0xffff;
  uVar5 = FUN_0051e0a0(param_1);
  FUN_0051c5ec(local_c,param_2,bVar2,iVar6,*(undefined4 *)(param_1 + 0x18),uVar5,uVar4,uVar3);
  *in_FS_OFFSET = iVar6;
  FUN_00403a84(local_c,iVar6,uVar5,&LAB_0051cf8d);
  return;
}

