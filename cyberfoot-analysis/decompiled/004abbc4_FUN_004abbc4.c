// Address: 004abbc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004abbc4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004ab7f0(param_1,param_3);
  puVar2 = (undefined1 *)(iVar1 + param_2 * 3);
  uVar3 = FUN_004080a4(CONCAT31((int3)((uint)puVar2 >> 8),puVar2[2]),
                       CONCAT31((int3)((uint)(param_2 * 3) >> 8),puVar2[1]),*puVar2);
  return uVar3;
}

