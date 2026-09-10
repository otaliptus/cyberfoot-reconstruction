// Address: 00403d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403d58(int param_1,int param_2,byte *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = 0;
  while( true ) {
    puVar1 = *(undefined2 **)(param_1 + -0x34);
    if (puVar1 != (undefined2 *)0x0) {
      iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar1);
      puVar3 = puVar1 + 1;
      do {
        if (param_2 == *(int *)(puVar3 + 1)) {
          iVar2 = (byte)puVar3[3] + 1;
          puVar3 = puVar3 + 3;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            *param_3 = (byte)*puVar3;
            puVar3 = (ushort *)((int)puVar3 + 1);
            param_3 = param_3 + 1;
          }
          return;
        }
        puVar3 = (ushort *)((int)puVar3 + (uint)*puVar3);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  *param_3 = 0;
  return;
}

