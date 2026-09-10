// Address: 004d3d40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3d40(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 extraout_var;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  if (3 < param_3) {
    puVar1 = (undefined2 *)thunk_FUN_004d33d9(param_2,0x5c);
    iVar5 = param_3 + -1;
    puVar4 = param_2;
    uVar3 = extraout_var;
    if (0 < iVar5) {
      do {
        if (puVar1 < puVar4) {
          puVar1 = (undefined2 *)thunk_FUN_004d33d9(puVar4,CONCAT22(uVar3,0x5c));
        }
        if (puVar1 == (undefined2 *)0x0) {
          return;
        }
        iVar2 = (int)puVar1 - (int)param_2 >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)(((int)puVar1 - (int)param_2 & 1U) != 0);
        }
        if (param_3 <= iVar2) {
          return;
        }
        uVar3 = (undefined2)((uint)iVar2 >> 0x10);
        *param_1 = *puVar4;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

