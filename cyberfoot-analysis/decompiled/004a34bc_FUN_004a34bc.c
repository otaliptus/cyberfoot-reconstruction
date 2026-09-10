// Address: 004a34bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a34bc(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) < 0xe) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | param_4 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f)
    ;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | param_4 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)param_4 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
  }
  FUN_004a4120(param_1,param_2,param_3,1);
  return;
}

