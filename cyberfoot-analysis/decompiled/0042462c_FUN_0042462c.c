// Address: 0042462c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042462c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x28);
  puStack_28 = &LAB_00424773;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *(ushort *)(param_2 + 7) = *(ushort *)(param_2 + 7) | 4;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0042747c(param_2);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00427450(local_c,iVar5);
      if ((*(byte *)(iVar3 + 0x24) & 4) != 0) {
        iVar3 = FUN_00427450(local_c,iVar5);
        *(ushort *)(iVar3 + 0x1c) = *(ushort *)(iVar3 + 0x1c) | 4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(local_8 + 0x30) != 0) {
    uVar4 = FUN_004245dc(local_c[2]);
    *(undefined4 *)(local_8 + 0x20) = uVar4;
  }
  if (*(short *)(local_8 + 0x42) != 0) {
    if (*(int *)(local_8 + 0x20) != 0) {
      cVar1 = FUN_00403c10(*(int *)(local_8 + 0x20),PTR_PTR_0041c690);
      if (cVar1 == '\0') goto LAB_0042470b;
    }
    local_18 = *(undefined4 *)(local_8 + 0x20);
    (**(code **)(local_8 + 0x40))
              (*(undefined4 *)(local_8 + 0x44),local_8,local_c,local_8 + 0x28,&local_18,local_c[2]);
    *(undefined4 *)(local_8 + 0x20) = local_18;
  }
LAB_0042470b:
  (**(code **)(*local_c + 0x24))(local_c,local_8);
  *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) & 0xfffb;
  iVar2 = FUN_0042747c(local_c);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00427450(local_c,iVar5);
      if ((*(byte *)(iVar3 + 0x24) & 4) != 0) {
        iVar3 = FUN_00427450(local_c,iVar5);
        *(ushort *)(iVar3 + 0x1c) = *(ushort *)(iVar3 + 0x1c) & 0xfffb;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  *(undefined4 *)(local_8 + 0x20) = local_10;
  *(undefined4 *)(local_8 + 0x28) = local_14;
  return;
}

